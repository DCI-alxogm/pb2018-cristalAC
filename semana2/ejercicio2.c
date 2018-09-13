/*Programa creado por Cristal Cardoso*/

#include<stdio.h>
int main (void)

{
	int a,b,c,d; //Para este primer programa utilizamos variables de tipo 		entero, porque como lo pide a continuación,necesitaremos números 		enteros//
	
	int e1,e2,e3,e4;
	printf("Introduce cuatro numeros enteros, por favor\n");
	printf("Introduce a:");
	scanf("%i",&a);
	printf("Introduce b:");
	scanf("%i",&b);
	printf("Introduce c:");
	scanf("%i",&c);
	printf("Introduce d:");
	scanf("%i",&d);
	//A continuación se realizan las operaciones
	
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("E1=%i",e1);
	printf("\nE2=%i",&e2);
	printf("\nE3=%i",&e3);
	printf("\nE4=%i",&e4);
}

