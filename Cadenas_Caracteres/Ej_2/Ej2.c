/*
2) Escribir un fragmento de código que determine si una cadena de caracteres está vacía o no, de dos formas
distintas. Utilizar el carácter NUL para una de ellas y la función de biblioteca strcmp() para la otra. 
*/

#include <stdio.h>
#define MAX_STR 10

int main(void)
{
	char str[MAX_STR];

	str[0] = '\0';

	/*
	if (fgets(str,MAX_STR+2,stdin) == NULL)
	{
		printf("%s\n", "La cadena de caracteres tiene caracteres");
	}*/
	if (str[0] == '\0')
	{
		fprintf(stderr, "%s\n", "La cadena de caracteres no tiene caracteres");
		printf("Hola mundo");
		return 1;
	}


	return 0;
}

/*preguntar*/