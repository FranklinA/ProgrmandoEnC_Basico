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

int suma(int n1,int n2);

int main( ) {

   //char str[100];
   int i;
   int a;

   printf( "Enter a value 1 Enter a value 2:");
   scanf("%d %d",&i,&a);//scanf("%s %d %d", str, &i, &a);

   int s=suma(i,a);

   printf( "\nYou entered: %d",s);//printf( "\nYou entered: %s %d %d %d", str, i, a,suma);

   return 0;
}

int suma(int n1,int n2){
	int sum=0;
	sum=n1+n2;
	return sum;
}
