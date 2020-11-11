/*Transformar un numero en base 10 a base 16(hexa) y ponerlo en una cadena de caracteres, mostrandola por stdout.*/

#include<stdio.h>
#define MAX_STR_LENGTH 20
int main() 
{
	long int decimalNumber;
	char str[MAX_STR_LENGTH];
	
	printf("Enter any decimal number: ");
	scanf("%ld", &decimalNumber);
	
	sprintf(str,"%lX",decimalNumber); 
	/*La X es de hexadecimal y la l es por el long int*/
	
	puts(str);

	return 0;
}