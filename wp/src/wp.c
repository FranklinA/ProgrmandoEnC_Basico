/*
  Unix Word Count Clone

	Autor : Ricardo Markiewicz
	Version : 1.2.0

	ChangeLog:
	19-06-2002 : agrego funcion ByteCount (1.2.0)
	18-06-2002 : agrego funcion LineCount y manejo de parametros (1.1.0)
	18-06-2002 : Inicio 1.0.0. funcion WordCount

Para Compilar : gcc -Wall -o wc wc.c
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {ON, OFF} t_Estado;

typedef struct _opt_ { /* Guardo opciones */
	t_Estado wc; /* contar palabras ? */
	t_Estado lc; /* contar lineas ? */
	t_Estado bc; /* contar bytes ? */
} t_Opciones;


void help(char *s);
void handleParam(int argc, char *argv[], t_Opciones *o, char ***, int *);

unsigned int WordCount(FILE *);
unsigned int LineCount(FILE *);
unsigned int ByteCount(FILE *);

int main(int argc, char *argv[])
{
	int i;

	/* los voy a separar de argv */
	char **files;
	int cant_files;

	t_Opciones o;
	FILE *fp;

	if (argc < 2) {
		help(argv[0]);
		exit(EXIT_SUCCESS);
	}

	/* reservo lugar para argc-1 archivos por si acaso */
	files = (char **)malloc((argc-1)*sizeof(char *));

	handleParam(argc, argv, &o, &files, &cant_files);

	for(i=1; i<cant_files; i++) {
		printf("%s:", files[i]);
		fp = fopen(files[i], "r");
		if (fp == NULL) /* no se pudo abrir */
			printf("error al abrir el archivo\n");
		else {
			if (o.wc == ON)
				printf(" %d palabras", WordCount(fp));
			rewind(fp);

			if (o.lc == ON)
				printf(" %d lineas", LineCount(fp));
			rewind(fp);

			if (o.bc == ON)
				printf(" %d bytes", ByteCount(fp));
			rewind(fp);

			printf("\n");
			fclose(fp);
		}
	}

	/* libero memoria pedida */
	for(i=0; i<cant_files; i++)
		free(files[i]);

	free(files);
	return EXIT_SUCCESS;
}

void handleParam(int argc, char *argv[], t_Opciones *o, char ***file, int *c_files)
{
	int i, cant_files = 0;

	o->lc = OFF;
	o->wc = ON; /* por default */

	for(i=0; i<argc; i++) {
		if (strcmp(argv[i], "-w") == 0)
			o->wc = ON;
		else if (strcmp(argv[i], "-l") == 0)
			o->lc = ON;
		else if (strcmp(argv[i], "-b") == 0)
			o->bc = ON;
		else {
			/* Pido lugar y copio el nombre del archivo */
			(*file)[cant_files] = malloc((strlen(argv[i])+1)*sizeof(char));
			strcpy((*file)[cant_files], argv[i]);
			cant_files++;
		}
	}
	(*c_files) = cant_files;
}

void help(char *s)
{
	printf("Modo de uso :\n");
	printf("\t%s <opciones> <archivo 1> ... <archivo n>\n", s);
	printf("\t-w\tcontar palabras\n");
	printf("\t-l\tcontar lineas\n");
	printf("\t-b\tcontar bytes\n");
}

unsigned int WordCount(FILE *fp)
{
	char c;
	unsigned int count = 0;

	while ((c=fgetc(fp)) != EOF)
		if ((c == ' ') || (c == '\t') || (c == '\n')) {
			count++; /* termina una palabra */
			/* ahora tengo que saltear todos los espacios seguidos */
			while ((c=fgetc(fp)) != EOF)
				if ((c != ' ') && (c != '\t') && (c != '\n'))
					break;
		}

	return count;
}

unsigned int LineCount(FILE *fp)
{
	char c;
	unsigned int count = 0;

	while ((c=fgetc(fp)) != EOF)
		if (c == '\n') {
			count++; /* termina una linea */
		}

	return count;
}

unsigned int ByteCount(FILE *fp)
{
	unsigned int count = 0;

	while (fgetc(fp) != EOF)
			count++;


	return count;
}
