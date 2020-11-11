/*Este programa va a ser similar a un programa para copiar, pero en el medio se va a implementar que hay que transformar un caracter en su valor que representa en la tabla ASCII. (habria que validar si el caracter es una letra o no)(y si ya esta en mayuscula)
Una vez transforamdo en su valor de la tabla, hay que restarle 32 y colverlo a transformar en caracter.(Las minisculas y las mayusculas estan separadas 32 lugares en la tabla). */

#include <stdio.h>
#define MAX_STR_LENGTH 25
int main(void)
{
	char str_Mayusculas[MAX_STR_LENGTH];
	char str_minusculas[MAX_STR_LENGTH] = "hol L}A-pWf";

	size_t contador =0 , i;
	char transformador;

	puts(str_minusculas);

	while(str_minusculas[contador] != '\0')
	{
		
		i = str_minusculas[contador];
		
		printf("%li\n", i);
				
		
		if( i < 91 && i > 64)
		{
			str_Mayusculas[contador] = str_minusculas [contador];
			
			/*
			printf("Entro a if( MAYUSCULAS )\n");
			printf("Valido caracter\n");
			*/
		}
		

		if(i == 32)
		{
			str_Mayusculas[contador] = str_minusculas [contador];
			
			/*
			printf("Entro a if(ESPACIO)\n");
			printf("Valido caracter\n");
			*/
		}

		/*Caracteres que son letras minusculas*/
		if( i < 123 && i > 96 )
		{
			i = i - 32; /*cambiando el valor de i al de su letra 				mayuscula*/
			
			transformador = i; /*transforamdor es un tipo char, que 					toma el nuevo valor de i (el de la 						letra en mayuscula)*/
			
			str_Mayusculas[contador] = transformador;
			/*Guarda en str_Mayusculas en la posicion de la letra original en minuscula, su nueva version transformada a mayusucula.*/
			
			/*printf("Valido caracter\n");*/
		}
		
		if(  i > 122 )
		{
			
			str_Mayusculas[contador] = ' ';	
			
			/*
			printf("Entro a i(f>122)\n");
			printf("INValido caracter\n");
			*/
		}

		if(  i < 32)
		{
			str_Mayusculas[contador] = ' ';	
			
			/*
			printf("Entro a if (i < 32)\n");
			printf("INValido caracter\n");
			*/
		}

		if(  i > 32 && i < 65 )
		{
			str_Mayusculas[contador] = ' ';

			/*
			printf("Entro a if (i > 32 &&  i < 65)\n");
			printf("INValido caracter\n");
			*/
		}
		
		contador++;
	}
	
	str_Mayusculas[contador] = '\0';
	puts(str_Mayusculas);
	
	return 0;
}