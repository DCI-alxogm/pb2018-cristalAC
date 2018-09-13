/*Programa creado por Cristal Cardoso*/

#include<stdio.h>
int main (void)

{
	float a,b,c,d;		//En este segundo programa necesitamos 		variables del tipo flotante, ya que se introducirán números reales//
	
	float e1,e2,e3,e4;
	printf("Introduce cuatro numeros enteros, por favor\n");
	printf("Introduce a:");
	scanf("%f",&a);
	printf("Introduce b:");
	scanf("%f",&b);
	printf("Introduce c:");
	scanf("%f",&c);
	printf("Introduce d:");
	scanf("%f",&d);
	//A continuación se realizan las operaciones
	
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*c/d;
	e4=a+(b*c)/d;
	printf("E1=%f",e1);
	printf("\nE2=%f",&e2);
	printf("\nE3=%f",&e3);
	printf("\nE4=%f",&e4);
}
