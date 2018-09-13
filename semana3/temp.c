/*Programa de conversion de temperaturas*/

#include<stdio.h>
int main ()
{
	int C;
	float K, F, FC, KC;
	printf("Introduce una temperatura en grados Celsius: ");
	scanf("%i",&C);
	//A continuación se indica la conversión de Celsius a Farhenheit
	F=(C*1.8)+32;
	//Conversión de Celsius a grados Kelvin
	K=C+273.15;

	printf("\nLa temperatura en grados Farenheit es : %f",F);
	printf("\nLa temperatura en grados Kelvin es : %f",K);
	
	//Ahora convertimos nuevamente de grados Farhenheit y Kelvin a Celsius

	FC=(F-32)/1.8;
	KC=K-273.15;
	
	printf("\nTu temperatura de Farhenheit a Celsius es : %f \n",FC);
	printf("\nTu temperatura de Kelvin a Celsius es : %f \n",KC);

}
	
