#include <stdio.h>

int main () {
	char str[80];
   	float f;

	scanf("%f", &f);
	   
	sprintf(str, "El valor de f es: %f", f);
   	puts(str);
	fputs(str,stdout);
   
   return(0);
}