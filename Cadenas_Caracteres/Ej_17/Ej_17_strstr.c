/*Busca la primer aparicion del su*/
#include <stdio.h>
#include <string.h>


int main () {
	const char haystack[] = "hola como federico como estas?";
	const char needle[] = "fe";
	char *ret;

	ret = strstr(haystack, needle);

	if(ret == NULL) {
		printf("No encontre needle en haystack\n");
		return 0;
	}
	/*printf("The substring is: %s\n\n", ret);*/
	/*
	putchar(*ret);
	*/
	putchar('\0');
	puts(ret);

	
	return(0);
}