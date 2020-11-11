/*Escribir un programa que lea de stdin una cadena de caracteres que finalice con espacios en blanco y los
elimine desplazando los caracteres útiles hacia la izquierda. (operación right-trim). */

#include <stdio.h>
#define MAX_STR_LENGTH 25
int main(void)
{
	char str[MAX_STR_LENGTH];
	
	size_t posicion = 0; 

	/*Pedir y obtener una cadena de caracteres que al final tenga espacios*/
	printf("%s\n", "Ingrese una cadena de caracteres que termine con espacios");
	fgets(str, sizeof(str)+2, stdin);
	
	while (str[posicion] != '\0')
	{
		/*Si el caracter en el que estamos es el espacio, lo reemplazamos por el null*/
		if(str[posicion] == ' ')	
		{
			str[posicion] = '\0';
		}
		posicion++;
	}
	
	puts(str);

	return 0;
}