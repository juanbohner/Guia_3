#include <stdio.h>
#define MSJ_VALOR "El valor de i es:"
int main () {
	char str[80];
   	int i;

	scanf("%d", &i);
	   
	sprintf(str, "%s%d", MSJ_VALOR,i);
   	puts(str);
	fputs(str,stdout);
	printf("\n");
   
   return(0);
}