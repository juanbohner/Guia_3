#include <stdio.h>

int main(void)
{
	char name[10];
	int c;
	fgets(name, sizeof(name) ,stdin);
   	
	c = puts(name);
	/* En una lectura exitosa puts devuelve el numero de caracteres que leyo mas el de \n y \0*/

  	printf("%i\n",c);
	/*c = strlen + 2.(strlen + \n y \0)*/
	
	
	/* 
	printf("%s\n", name);
	*/
	return 0;
}