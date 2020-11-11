#include <stdio.h>
#define MAX_STR_LENGTH 20
#define MAX_CHARACTERS_TO_COPY 20

int main(void)
{
	char str_copiado[MAX_STR_LENGTH];
	char str[MAX_STR_LENGTH];
	size_t contador, n,i;

	n = MAX_CHARACTERS_TO_COPY;
	fgets(str, sizeof(str)+2, stdin);

	/*Si la cadena de caracteres es menor al numero de caracteres que se van a comparar, obtiene el tamño total de la cadena y termina copiandola toda. Pero si n es menor, solo obtendria el valor de n*/
	for(contador = 0; str[contador] != '\0' && contador < n; contador++);


	for(i=0; i < contador; i++)
	{
		str_copiado[i] = str[i]; 
		/*Le copia el caracter de la posicion i al arreglo str*/
	}
	
	/*
	El enunciado dice que tiene que ir sin el caracter nulo.
	Entonces en este caso no va el faragmento de codigo que agrega al final el caracter NULL:
	str_copiado[i] = '\0';
	*/
	puts(str_copiado);
	puts(str);
	printf("%ld\n", contador);
	printf("%ld\n", i);

	if( contador == n)
	{
	printf("%s%li\n", "El largo del arreglo es:\t", i);
	}
	
	if( contador < n)
	{
	printf("%s%li\n", "El Largo del arreglo es:\t", i-1);
	}

	return 0;
}