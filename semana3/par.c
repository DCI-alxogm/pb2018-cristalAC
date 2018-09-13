/*Programa realizado por Cristal Cardoso*/

#include<stdio.h>
int main ()
{
	int a;
	printf("Introduce un numero por favor: \n");
	scanf("%i",&a); //Despues de perdile al usuario que digite un numero, 		el programa ejecuta las condiciones
	

	//Aqui basicamente dice que si a dividido entre 2 es i	gual a cero, 		entonces es par
	if(a%2==0)	
	{
		printf("a=%i es un numero par\n",a);
	}

	//En caso de que el numero digitado no cumpla la condicion anterior 		ejecuta la siguiente instruccion, indicando que el numero es par
	else
	{
		printf("a=%i es un numero impar\n",a);
	}

	return 0;
}
