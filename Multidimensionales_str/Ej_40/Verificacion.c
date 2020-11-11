/*Obj: hacer un programa que verifique cuantos str hay en un arreglo multidimencional de cadena de caracteres. Y cual de todos los str tiene mas caracteres. 
char arr_str [MAX_AMOUNT_STR][MAX_STR_LENGTH]=
{
	"str_1",
	"str_2",
	... ,
	"str_n"
};

tengo n <= MAX_AMOUNT_STR y cada uno de un largo maximo MAX_STR_LENGTH.
*/
#include <stdio.h>
#include <string.h>
#define MAX_AMOUNT_STR 12
#define MAX_STR_LENGTH 20
int main(void)
{
	/*
	char cadd[3][5] = {
		"dia",
		"mes",
		"anio"
	};
	char cadd_2[3][5] = {"dia","mes","anio"};
	*/
	char months[MAX_AMOUNT_STR][MAX_STR_LENGTH] =
	{
		"January",
		"February",
		"March",
		"April",
		"Novemberer",
		"December"
	};
	size_t posicion_str_arr, posicion_str_individual, max_length, posicion_palabra_mas_larga;

	max_length = strlen(months[0]);

/*Lo que se hace es checkear para cada cadena de caracteres en la posicion inicial de cada cadena de caracteres si el primer caracter es un \0*/
	
	for (posicion_str_arr = 0, posicion_str_individual = 0; months[posicion_str_arr][posicion_str_individual] != '\0'; posicion_str_arr++)  
	{
		/*Busco cual es la palabra mas larga de todo el arreglo de caracteres.*/
		if(max_length < strlen(months[posicion_str_arr]))
		{
			max_length = strlen(months[posicion_str_arr]);
			posicion_palabra_mas_larga = posicion_str_arr;
		}
	} 
	printf("La cantidad de str en el arreglo multidimencional es:\t%ld\n",posicion_str_arr);
	printf("El str con mas caracteres es:\n");
	puts(months[posicion_palabra_mas_larga]);

	return 0;
}