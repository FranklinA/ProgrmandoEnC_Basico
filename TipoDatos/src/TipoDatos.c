/*
 ============================================================================
 Name        : TipoDatos.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char a = 'e';// Tamaño= 1 byte Rango: 0 .. 255   %c
	short b =-15;// Tamaño= 2 bytes Rango : -128 ... 127 %i
	int c= 1024; // Tamaño = 2 bytes rango : -32768...32767 %i
	unsigned int d = 128;//solo numeros positivos // Tamaño = 2bytes Rango: 0... 65535 %i
	long e = 123456;//Tamaño= 4bytes %li
	float f = 15.678;//tamaño = 4 bytes  %f
	double m = 123123.123123;//tamaño =8bytes  %lf

	printf("El elemento es : %i\n",d); /* prints TipoDeDatos */
	printf("Imprimiento los elementos que son variables: %c %i %i %li %f %lf\n",a,b,c,e,f,m); /* prints TipoDeDatos */
	printf("Imprimiento los elementos que son variables: %c %i %i %li %.2f %.lf \n",a,b,c,e,f,m); /* prints TipoDeDatos */


	int variablea;
	float variableb;
	char variablec;
	const int bufsize = 50;
	char variableMc[bufsize];

	printf("\n Digite el valor de la variablea:");
	scanf("%i",&variablea);// O puede usar gets(x)
	printf("\nLa variables es:%i",variablea);

	printf("\n Digite el valor de la variableb:");
	scanf("%f",&variableb);
	printf("\n La variables es:%f",variableb);

	printf("\n Digite el valor de la variablec:\n");
	//scanf("%c",&variablec);/*No funciono*/
	//printf("\n La variables es: %c",variablec);
	//gets(variableMc);//En des-uso
	fgets(variableMc, bufsize, stdin);
	printf("\n La variables es: %s\n",variableMc);

	return 0;
}
