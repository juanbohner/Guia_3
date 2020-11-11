/*Convertir caracteres a minusculas*/
#include <stdio.h>
#define MAX_STR_LENGTH 25
int main(void)
{
	char str_Mayusculas[MAX_STR_LENGTH] = "ZoL L}A-pWf";
	char str_minusculas[MAX_STR_LENGTH];

	size_t contador =0 , i;
	char transformador;

	puts(str_Mayusculas);

	while(str_Mayusculas[contador] != '\0')
	{
		
		i = str_Mayusculas[contador];
		
		/*printf("%li\n", i);	Es el valor en la tabla ASCII de cada caracter*/
				
		
		if( i < 91 && i > 64)
		{
			/*Caracteres que soy mayusculas. 
			Transformacion de mayusculas a minusculas*/
			str_minusculas [contador] = str_Mayusculas[contador];
			i = i + 32;
			transformador = i; 
			str_minusculas[contador] = transformador;

		}
		

		if(i == 32)
		{
			/*Espacio*/
			str_minusculas[contador] = str_Mayusculas[contador];
			
		}

		
		if( i < 123 && i > 96 )
		{	
			/*Caracteres que son letras minusculas.
			 Quedan iguales.*/
			str_minusculas[contador] = str_Mayusculas [contador];
			
		}
		contador++;
		if(  i > 122 )
		{
			str_minusculas[contador - 1] = ' ';	
			continue;
			/*Caracteres que no son letras*/
		}

		if(  i < 32)
		{
			str_minusculas[contador - 1] = ' ';	
			continue;
			/*Caracteres de control*/
		}

		if(  i > 32 && i < 65 )
		{
			str_minusculas[contador - 1] = ' ';
			continue;
			/*Caracteres entre el espacio y la A*/
		}
		
		
	}
	
	str_minusculas[contador] = '\0';
	puts(str_minusculas);
	
	return 0;
}