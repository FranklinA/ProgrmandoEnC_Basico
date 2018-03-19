/*
 ============================================================================
 Name        : FuncionesParte1.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
Funciones:

- Funciones sin retorno de valor:

void nombreFuncion(){
     Instrucciones...
}

-Funciones con retorno de valor:

tipo_dato nombreFuncion( parametros ){
          Instrucciones...
          return expresion
}

*/
//1. Saludo por pantalla con funcion void
//2. Sumar numeros

#include <stdio.h>
#include <stdlib.h>
//prototipos para indicar la funcion en el programa principal
void saludo();
int sumar(int n1, int n2);

int main( ) {
	//saludo();

	int a,b,suma=0,su;
	printf(" Digite los numeros: ");
	//a=getchar();
	//printf("Digite el numero 2:\n");
	//b=getchar();
	scanf("%d,%d",&a,&b);//Me funciono cambiando %i por %d
	su=sumar(a,b);
	//printf("\nSe digitaron:\n");
	//putchar(a);
	//printf("\n");
	//putchar(b);
	//printf("\n");

	printf("\nLa suma es %d",su);

	//printf("FuncionesParte1"); /* prints FuncionesParte1 */
	return 0;
}

void saludo(){
	printf("\nHola funcion void\n");
}

int sumar(int n1, int n2){
	int sum=0;
	sum=n1+n2;
	return sum;
}
