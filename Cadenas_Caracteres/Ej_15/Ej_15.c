/*Escribir un programa que lea de stdin una cadena de caracteres que comience con espacios en blanco y
los elimine desplazando los caracteres útiles hacia la izquierda. (operación left-trim). */

#include <stdio.h>
#define MAX_STR_LENGTH 25
int main(void)
{
	char str[MAX_STR_LENGTH];
	
	size_t posicion_primer_caracter = 0, posicion = 0;
	
	printf("Ingrese una cadena de caracteres que empiece con espacios\n");
	fgets(str, sizeof(str)+2, stdin);
	
	while (str[posicion_primer_caracter] == ' ')
	{
		posicion_primer_caracter++;
	}
	

	while(str[posicion] != '\0')
	{
		str[posicion] = str[posicion_primer_caracter];
		posicion++;
		posicion_primer_caracter++;
	}

	puts(str);
	

	return 0;
}