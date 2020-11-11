#include <stdio.h>
int main(void)
{
char a[] = "hola";
char b[] = "hola";
if(a==b) /*Esta mal, la comparacion de dos arreglos, siempre da erroneo*/
{
	printf("Son iguales.");
}
else
	printf("Son distintas."); 

return 0;
}