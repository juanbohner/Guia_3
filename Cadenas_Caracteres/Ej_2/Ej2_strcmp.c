/*
2) Escribir un fragmento de código que determine si una cadena de caracteres está vacía o no, de dos formas
distintas. Utilizar el carácter NUL para una de ellas y la función de biblioteca strcmp() para la otra. 
*/

#include <stdio.h>
#include <string.h>

#define MAX_STR 10

int main(void)
{
	int comparacion;
	
	char str_2[MAX_STR];
	
	char str_vacio[MAX_STR];
	
	str_vacio[0] = '\0';
	str_2[0] = '\0';
	
	/*
	fgets(str_2, sizeof(str_2)+2, stdin);
	*/
	comparacion = strcmp(str_vacio,str_2);

	if (comparacion == 0)
	{
		fprintf(stderr, "%s\n", "La cadena de caracteres no tiene caracteres");
		return 1;
	}

	printf("La cadena de caracteres no esta vacia\n");


	return 0;
}


/*if(strcmp(str,"")==0)*/