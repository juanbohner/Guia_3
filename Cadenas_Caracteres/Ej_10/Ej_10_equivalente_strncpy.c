#include <stdio.h>
#define MAX_STR_LENGTH 30
#define MAX_CHARACTERS_TO_COPY 13

int main(void)
{
	char str_copiado[MAX_STR_LENGTH];
	char str[MAX_STR_LENGTH];
	size_t contador, n,i;

	n = MAX_CHARACTERS_TO_COPY;
	if(n > MAX_STR_LENGTH)
	{
		fprintf(stderr,"No se puede copiar un numero de caracteres tan grande, debido a que es mayor que el tamaño del arreglo donde se estan copiando.\n");
		return 1;
	}
	fgets(str, sizeof(str)+2, stdin);

	/*Si la cadena de caracteres es menor al numero de caracteres que se van a comparar, obtiene el tamño total de la cadena y termina copiandola toda. Pero si n es menor, solo obtendria el valor de n*/
	for(contador = 0; str[contador] != '\0' && contador < n; contador++);

	/*Contamos desde la posicion 0.*/

	for(i=0; i < contador; i++)
	{
		str_copiado[i] = str[i]; 
		/*Le copia el caracter de la posicion i al arreglo str*/
	}

	/*Prueba para ver como funcionaba y si estaba funcionando.*/
	/*
	printf("%ld\n",i);
	printf("%ld\n",contador);
	*/


	/* En este paso el valor de i y de contador, es el del proximo caracter al ultimo que se ingreso. */
	if( contador < n )
	{
		while(contador < n)	
		{
			str_copiado[i] = '\0';
			i++;
			contador++;
			/*Le ponemos el caracter NULL a todos los caracteres hasta que el valor de i sea 
			i = (MAX_CHARACTERS_TO_COPY - 1)
			Lo cual es correcto, porque str_copiado[i], escribe sobre la posicion, no sobre el numero de caractes, siembre va uno atrasado.
			Despues i y contador pasan a tener el mismo valor de MAX_CHARACTERS_TO_COPY. 
			Pero NO escriben en el caracter que está en posicion str_copiado[MAX_CHARACTERS_TO_COPY]*/
		}

	}

	/*Pruebas para ver como y si funcionaba correctamente*/
	/*
	printf("%ld\n",i);
	printf("%ld\n",contador);
	

	printf("%ld\n", contador);

	if( contador == n)
	{
	printf("%s%li\n", "El largo del arreglo es:\t", i);
	}
	
	if( contador < n)
	{
	printf("%s%li\n", "El Largo del arreglo es:\t", i-1);
	}
	*/

	puts(str_copiado);
	puts(str);
	
	return 0;
}