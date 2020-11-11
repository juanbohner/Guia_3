#include <stdio.h>
#include <string.h>

int main () {
   	char str1[15];
   	char str2[15];
   	int comparacion;


   	strcpy(str1, "abcdefg");
   	strcpy(str2, "abcdef");

   	comparacion = strcmp(str1, str2);
	
	/*
	Compara caracter a caracter. Empieza de izquierda a derecha (de la posicion 0 a la N) hasta encontrar uno que sea distinto del otro. 
	Compara los carcteres con su valor en la tabla ASCII.
	Al poner: comparacion = strcmp(str1,str2), siempre va a estar comparando el valor del caracter de str2 con el de la misma posicion de str1. Cuando el de str2 es mayor, devuelve un numero > 0. Si el caracter de str2 es menor al de str1 devuelve un numero < 0. Si son iguales, devuelve 0.

	*/

    if(comparacion < 0)
	{
      	printf("str1 is less than str2\n");
	}
    if(comparacion > 0)
	{
    	printf("str2 is less than str1\n");
   	} 
	if(!comparacion)
	{
    	printf("str1 is equal to str2\n");
   	}

	printf("%i\n",comparacion);
   
   	return(0);
}