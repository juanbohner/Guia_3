/*Copiar una caden de caracteres en un arreglo*/
/*Voy a implmentarlo usando un ciclo que por cada iteracion guarde cada caracter de la cadena de caracteres en la posicion arreglo[i]. la proxima seria i++. */

#include <stdio.h>
#define MAX_STR_LENGTH 20

int main(void)
{
	char str_copiado[MAX_STR_LENGTH];
	char str[MAX_STR_LENGTH];
	size_t contador, i;

	fgets(str, sizeof(str)+2, stdin);

	/*Obtener el tamaño de la cadena de caracteres*/
	for(contador = 0; str[contador] != '\0'; contador++);

	for(i=0; i < contador; i++)
	{
		str_copiado[i] = str[i]; 
		/*Le copia el caracter de la posicion i al arreglo str*/
	}

	str_copiado[i] = '\0';

	puts(str_copiado);
	printf("%s%li\n", "La longitud del arreglo es:\t", i-1);
	return 0;
}