/*
 ============================================================================
 Name        : EjemploScan.c
 Author      : Frank
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int suma(int n1,int n2);

int main( ) {

   //char str[100];
   int i;
   int a;

   printf( "Enter a value :");
   scanf("%d %d",&i, &a);//scanf("%s %d %d", str, &i, &a);

   int s=suma(i,a);

   printf( "\nYou entered: %d",s);//printf( "\nYou entered: %s %d %d %d", str, i, a,suma);

   return 0;
}

int suma(int n1,int n2){
	int sum=0;
	sum=n1+n2;
	return sum;
}
