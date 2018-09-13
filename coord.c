/*El siguiente programa funciona como convertidor de coordenadas cartesianas a coordenadas esféricas*/
/*Creado por Cristal Cardoso*/


#include<stdio.h>
#include<math.h>
int main ()
{
	double x,y,z,r,thetha,phi;
	printf("Introduce tu coordenada en x: ");
	scanf("%i",&x);
	printf("Introduce tu coordenada en y: ");
	scanf("%i",&y);
	printf("Introduce tu coordenada en z: ");
	scanf("%i",&z);
	//vamos a definir los elementos de la libreria coordenadas.h

	//A continuación se indican las operaciones para ejecutar el conversor

	r=(sqrt((x*x)+(y*y)+(z*z)));
	thetha=(acos((z/r)));
	phi=(atan((y/x)));
	
	printf("\nr= %f \t",r);
	printf("\nthetha= %f \t",thetha);
	printf("\nphi= %f \t",phi);

}
