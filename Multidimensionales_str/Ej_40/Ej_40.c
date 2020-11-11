#include <stdio.h>
#define MAX_MONTHS 12
#define MAX_CARCACTERES_CADENA 10
int main(void)
{
	char cadd[3][5] = {
		"dia",
		"mes",
		"anio"
	};
	char cadd_2[3][5] = {"dia","mes","anio"};
	
	char months[MAX_MONTHS][MAX_CARCACTERES_CADENA] =
	{
		"January",
		"February",
		"March",
		"April",
		"November",
		"December"
	};
	size_t posicion_str_cadd, posicion_str_cadd_2, posicion_str_months;

	/*Impresion de cadd*/
	for (posicion_str_cadd = 0; posicion_str_cadd < 3; posicion_str_cadd++)
	{
		puts(cadd[posicion_str_cadd]);
	}

	/*Impresion de cadd_2*/
	for (posicion_str_cadd_2 = 0; posicion_str_cadd_2 < 3; posicion_str_cadd_2++)
	{
		puts(cadd_2[posicion_str_cadd_2]);
	}

	/*Impresion de months*/
	for (posicion_str_months = 0; posicion_str_months < MAX_MONTHS; posicion_str_months++)
	{
		puts(months[posicion_str_months]);
	}

	return 0;
}