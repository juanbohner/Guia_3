#include <stdio.h>
#define MAX_STR_LENGTH 4
int main(void)
{
	int str_enteros [] ={0, 1, 2, 3, 4};
	float str_flotantes [] = {0, 1.1111, 2.2222, 3.3333, 4.4444};
	size_t i;


	printf("Numeros enteros:\n");
	for( i = 0; i <= MAX_STR_LENGTH; i++)
	{
		printf("%d\n", str_enteros[i]);
	}
	printf("Numeros flotantes:\n");

	for( i = 0; i <= MAX_STR_LENGTH; i++)
	{
		printf("%f\n", str_flotantes[i]);
	}
	return 0;
}