/*
 ============================================================================
 Name        : PedirDatosImprmir.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main( ) {

	char a = 'e';// Tamaño= 1 byte Rango: 0 .. 255   %c

	char variablec;
	//const int bufsize = 50;
	//char variableMc[bufsize];

	printf("\n La variables es: %c",a);

	printf("\n Digite el valor de la variablec:\n");
	scanf("%c",&variablec);/*No funciono*/
	printf("\n La variables es: %c \n\0", variablec);

	//printf("\n Digite el valor de la variablec:\n");
	//fgets(variableMc, bufsize, stdin);/*Comentado lo anterior y ejecutando este bloque si funciono*/
	//printf("\n La variables es: %s \n",variableMc);

	return 0;

}
