#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = ""; 
	/*Un arreglo del tipo char vacio se escribe (char <nombre>[] = "";). El unico elemento que tendria es el \0.*/
	size_t c;

	c = sizeof(str) -1;
	printf("%ld\n", c);
	return 0;
}