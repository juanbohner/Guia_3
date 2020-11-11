#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_LENGTH 10

int main(void)
{
	char caracter_1[MAX_STR_LENGTH], caracter_2[MAX_STR_LENGTH];

	int num_1, num_2;

	printf("Ingrese un numero\n");

	fgets(caracter_1, sizeof(caracter_1)+2,stdin);
	fgets(caracter_2, sizeof(caracter_2)+2,stdin);


	num_1 = atoi(caracter_1);
	num_2 = atoi(caracter_2);
	
	puts(caracter_1);
	printf("%d\n", num_1);
	puts(caracter_2);
	printf("%d\n", num_2);

	return 0;

}
