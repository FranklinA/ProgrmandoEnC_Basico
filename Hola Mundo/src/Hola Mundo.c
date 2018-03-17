/*
 ============================================================================
 Name        : Hola.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>/* Libreria par imprimir por pantalla, pedir y guardar datos al usuario*/
#include <stdlib.h>/*Otra liberia ... hay mas*/

/*Directivas del preprocesador y variables */
#define PI  3.1416 /*Macro que asigna valor a una variable que tega dicho valor y nunca va a cambiar*/

int y=5; // Variable global

int main(void) {/*Funcion principal*/
	int x=10;/*Variable local x porque esta dentro de la funcion*/

	float suma=0;

	suma = PI+x;

	printf("Hola mundo :D \n"); /*Imprimes en pantalla*/
	printf("Resultado es %3f",suma); /*Imprimes en pantalla*/
	return 0;
}
