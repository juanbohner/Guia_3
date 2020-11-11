#include <stdio.h>

int main(void)
{
	char name[10];
	int c;
	fgets(name, sizeof(name) ,stdin);
	/*
	Hay que especificar: 
	(<nombre>, <tamaño>, <especificar de donde lo obtiene>)*/
   	
	c = fputs(name, stdout); 
	/*Hay que acalarar de donde escribe lo que tiene name*/
	
	/* En una impresion exitosa fputs devuelve el numero 1. En una no exitosa devuelve el numero -1*/

  	printf("%d\n",c);
	/*c = 1 si es exitosa*/
	
	return 0;
}