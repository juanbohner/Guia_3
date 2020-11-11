/*Transformar de numero en base 10 a base 16*/
#include<stdio.h>
#define MSJ_HEXA "Numero en hexa:"
int main() 
{
	long int decimalNumber, quotient;
	
	int i = 1, j, temp;
	
	char hexadecimalNumber[100];
	
	printf("Enter any decimal number: ");
	scanf("%ld",&decimalNumber);
	
	quotient = decimalNumber;
	
	while(quotient!=0) 
	{
		temp = quotient % 16;
		/*To convert integer into character*/
		
		if( temp < 10)
		    temp =temp + 48; 
		else
		    temp = temp + 55;
		
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	
	printf("%s\t%ld\n", MSJ_HEXA, decimalNumber);

	for (j = i -1 ;j> 0;j--)
	{
    	printf("%c",hexadecimalNumber[j]);
	}
	printf("\n");

	return 0;
}