/*Programa creado por Cristal Cardoso*/

#include<stdio.h>
int main (void)

{
	int anio1, edad2;
	char nom;
	
	printf("Por favor introduce tu año de nacimiento:");
	scanf("%i",&anio1);
	printf("¿cual es tu nombre?");
	scanf("%d",&nom);

	edad2=2028-anio1;
	
	printf("La edad que tendrás en el año 2028 será de: %i años \n",edad2);
 	

	return 0;
}
