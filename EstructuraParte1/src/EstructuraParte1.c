/*
 ============================================================================
 Name        : EstructuraParte1.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*1. hacer una estructura llamada corredor, en la cual se tendran los siguientes miembros:
 * Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categoria
 * de competicion:
 * - Juvenil <= 18 años
 * - Señor <= 40 años
 * - Veterano > 40 años
 * posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion*/

#include <stdio.h>
#include <stdlib.h>

struct corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
}corredor1;

int main(void) {
	char categoria[20];

	printf("Digite su nombre: ");
	gets(corredor1.nombre);
	printf("Digite su edad: ");
	scanf("%d",&corredor1.edad);
	fflush(stdin);//liberar espacio en el buffer
	printf("Digite sexo: ");///Se imprime pero no deja ingresar datos...
	gets(corredor1.sexo);
	printf("Digite su club: ");
	gets(corredor1.club);

	if(corredor1.edad<=18){
		strcpy(categoria,"Juvenil");

	}
	else if(corredor1.edad<=40){
		strcpy(categoria,"Senior");// esto es como igualara categoria="Senior" cuando es string se iguala asi.
	}else {
		strcpy(categoria,"Veterano");
	}


	printf("\nCategoria: %s",categoria);
	printf("\nNombre: %s", corredor1.nombre);
	printf("\nEdad: %d",corredor1.edad);
	printf("\nSexo: %s",corredor1.sexo);
	printf("\nClub: %s",corredor1.club);

	system("pause");

	return EXIT_SUCCESS;
}
