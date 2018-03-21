/*
 ============================================================================
 Name        : EstructuraParte2.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
/*
3. Realizar un programa en C que lea un arreglo de estructuras los datos de N empleados de la
empresa y que imprima los datos del empleado con mayor y menor salario
*/

#include <stdio.h>
#include <stdlib.h>

struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;
}empleados[100];

int main(void) {
	int n,i;
	float mayor = 0.0, menor= 99999999;

	printf("Digite el total de empleados:");
	scanf("%d",&n);

	for(i=0;i<=n;i++){
		fflush(stdin);
		printf("%d.Digite Nombre",empleados[i].nombre);
		gets(empleados[i].nombre);
		printf("%d.Digite Salario",empleados[i].salario);
		gets(empleados[i].nombre);
		printf("%f.Digite su Sexo",empleados[i].sexo);
		scanf("%f",&empleados[i].salario);
	}

	system("pause");
	return EXIT_SUCCESS;
}
