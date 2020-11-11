/*Escribir un programa que lea de stdin una cadena de caracteres, un carácter viejo y un carácter nuevo, y reemplace en la cadena todas las apariciones del carácter viejo por el carácter nuevo. */

#include <stdio.h>
#define MAX_STR_LENGTH 25
int main(void)
{
	char viejo = 'd';
	char nuevo = 'W';
	char str[MAX_STR_LENGTH];
	size_t posicon = 0;

	printf("Ingrese una cadena de caracteres\n");
	fgets(str, sizeof(str)+2, stdin);
	
	while (str[posicon] != '\0')
	{
		if(str[posicon] == viejo)
		{
			str[posicon] = nuevo;
		}
		posicon++;
	}
	puts(str);
	return 0;
}