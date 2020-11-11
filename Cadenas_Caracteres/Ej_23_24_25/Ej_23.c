/*Convertir un numero en base 10 a base 8 (octal)*/
#include <stdio.h>
#include <math.h>
#define MSJ_ENTER_INTEGRER "Ingrese un numero entero"
#define MSJ_NOT_A_NUMBER "Se ingreso un caracter distinto de un numero."
#define MAX_STR_LENGTH 20
int main(void)
{
	int decimal_num , i = 1;
	int octal_num = 0;

	int st;
	char c;

	char str[MAX_STR_LENGTH];


	printf("%s\n", MSJ_ENTER_INTEGRER);
	
	if(!(st = scanf("%d", &decimal_num)))
	{
		fprintf(stderr,"%s\n", MSJ_NOT_A_NUMBER);
		return 1;
	}
	if (st == EOF)
		return 1;
	
	while ((c=getchar()) != '\n'){};
	
    while (decimal_num != 0)
    {
        octal_num += (decimal_num % 8) * i;
        decimal_num /= 8;
        i *= 10;
    }

	sprintf(str, "%d", octal_num);
	puts(str);

	return 0;
}