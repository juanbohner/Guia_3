#include <stdio.h>
#define MAX_LENGTH 20
#define MSJ_ERROR "s2 no esta contenido en s1\n"
int main(void)
{
	const char s1[MAX_LENGTH] = "Hola Mundo!";
	const char s2[MAX_LENGTH] = "la";
	char str[MAX_LENGTH];
	size_t posicion_s1 = 0, posicion_s2 = 0, posicion_str = 0;
	size_t longitud_str_1 = 0, longitud_str_2 =0;
	size_t primer_caracter_comun;


	/*Longitud de s1*/
	while (s1[longitud_str_1] != '\0')
	{	
		longitud_str_1++;
	}
	printf("%ld\n", longitud_str_1);


	/*Longitud de s2*/
	while (s2[longitud_str_2] != '\0')
	{	
		longitud_str_2++;
	}
	printf("%ld\n", longitud_str_2);


	/*si la candena s2 es mas larga que s1, no puede estar contenida en s1.*/
	if(longitud_str_2 > longitud_str_1)
	{
		fprintf(stderr, MSJ_ERROR);
		return 1;
	}

	/*Comprobar que el primer caracter de s2, se encuentre en s1*/ /*Si checkeamos para todos los caracteres de s1 y ninguno es igual al primero de s2 nos putea.*/
	while ( s1[posicion_s1] !=  s2[posicion_s2])
	{
		posicion_s1++;

		if (posicion_s1 == longitud_str_1)
		{
			fprintf(stderr,"No tienen caracteres en comun\n%s",MSJ_ERROR);
			return 1;
		}
	}
	primer_caracter_comun = posicion_s1;


	/*compruebo cada caracter hasta encontrar uno distinto, a partir de haber encontrado el primer caracter igual en s2.*/
	while(s1[posicion_s1] == s2[posicion_s2] )
	{
		
		posicion_s1++;
		posicion_s2++;
	}


	/*Si algun caracter de s2 no esta contenido en s1, cierra el programa por ERROR*/
	if(posicion_s2 != longitud_str_2)
	{
		fprintf(stderr,MSJ_ERROR);
		return 1;
	}


	/*Ya esta todo validado. Sabemos que s2 esta contenido en s1.*/

	/*Copia todos los caracteres a partir del primer caracter igual de de ambas cadenas (s1 y s2) en la nueva cadena str*/
	while(s1[primer_caracter_comun] != '\0')
	{
		str[posicion_str] = s1[primer_caracter_comun];
		primer_caracter_comun++;
		posicion_str++;
	}	
	str[posicion_str] = '\0';

	printf("posicion s1:%ld\n", posicion_s1);
	printf("Posicion s2:%ld\n",posicion_s2);

	puts(str);

	return 0;
}