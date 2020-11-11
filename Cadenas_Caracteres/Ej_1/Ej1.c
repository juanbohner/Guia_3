#include <stdio.h>

/*
PARA SCANF
int main(void)
{
	char name[10];
	scanf("%s", name);

	printf("%s\n", name);
	return 0;
}
*/


/* PARA gets (no me deja)
int main(void)
{
	char name[10];

	gets(name);

	printf("%s\n", name);
	return 0;
}
*/
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