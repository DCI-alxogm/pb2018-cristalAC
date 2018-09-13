/*El siguiente programa fue realizado por Cristal Cardoso*/


#include <stdio.h>
int main()
{
	char c;
	int es_vocalminuscula, es_vocalmayuscula;
	printf("Introduce una letra: ");
	scanf("%c", &c);
	//A continuación se muestra la manera en que el programa determinará 		si se trata de una vocal ya sea mayúscula o minúscula
	es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c 		== 'u');
	es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c 		== 'U');
	
	//Entonces se aplican los condicionales, si la letra ingresada cumple 		con lo anterior imprimirá que es una vocal, no importando que sea 		mayúscula o minúscula
	if (es_vocalmayuscula || es_vocalminuscula)
	{
	printf("%c es una vocal\n", c);
	} 
	//En caso de que no haya cumplido el condicional anterior, imprimirá 		que se trata de una consonante
	else
	{
	printf("%c es consonante\n", c);
	}
	
return 0;
}
