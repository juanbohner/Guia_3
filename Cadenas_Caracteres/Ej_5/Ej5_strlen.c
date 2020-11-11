#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="Program";
    char b[]={'P','r','o','g','r','a','m','\0'};
	char c[] = "";
	size_t largo_a, largo_b, largo_c;

    /* using the %zu format specifier to print size_t */

	/*
    printf("Length of string a = %zu\n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
	
	No lo soporta el ISO C90 
	*/
	
	largo_a = strlen(a);
	largo_b = strlen(b);
	largo_c = strlen(c); 
	
	/*La funcion strlen() en el cazo de cadenas de caracteres que esten vacias te devuelve 0. Osea que siempre te da el largo, NO la cantidad de elementos. Porque en una cadena de caracteres siempre esta presente el caracter NULL (\0).*/

	printf("%s\t%li\n","El largo de la cadena a de caracteres es:",largo_a);
	printf("%s\t%li\n","El largo de la cadena b de caracteres es:",largo_b);
	printf("%s\t%li\n","El largo de la cadena c de caracteres es:",largo_c);
    return 0;
}