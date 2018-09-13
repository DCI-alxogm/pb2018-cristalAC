/*Programa realizado por Cristal Cardoso*/

#include<stdio.h>
int main ()
{
	int a;
	printf("Introduce un numero, por favor\n");
	scanf("%i",&a);
	
	//Posterior a digitar el numero que pide, se ejecuta la siguiente condición: si a es un numero par, entonces súmale +1

	if(a%2==0) 
	{
	a=a+1;

	printf("El numero que ingresaste es par, le hemos sumado +1, entonces = %i \n",a);
	}

	//He agregado un else para indicar cuando no es par, y que el numero no se ha modificado

	else
	{
		printf("a=%i es un numero impar\n",a);
	}
}
