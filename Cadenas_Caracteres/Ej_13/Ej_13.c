/*Toma un arreglo por stdin y lo reescribe cambiandoe los caracteres que son letras minusculas por letras mayusculas o lo mismo pero de mayusculas a minusculas. Tambien reemplaza los caracteres que no son letras por un espacio.*/

#include <stdio.h>
#define MAX_STR_LENGTH 25
#define MAYUSCULAS 0
#define MINUSCULAS 1
#define MSJ_SELECCION_MAY_MIN "Ingrese 0 para transformar los caracteres a MAYUSULAS o ingrese 1 para transformar los caracteres a MINUSCULAS. "
#define MSJ_INGRESE_STR "Ingrese una cadena de caracteres que no tenga mas que:"
#define MSJ_CARACTERES "caracteres"
typedef enum{
	FMT_MAYUSCULAS,
	FMT_MINUSCULAS
} format_t;

int main(void)
{

	char str_transformado[MAX_STR_LENGTH]; /*string traducido*/

	size_t contador = 0 , i;
	char transformador;
	int st,c, opcion;
	format_t formato;


	printf("%s\n",MSJ_SELECCION_MAY_MIN);

	/*Validacion del scanf*/
	if(!(st = scanf("%i", &opcion)))
  	{
    	fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
    	return 1;
  	}
  	
	if (st == EOF)
    	return 1;

	if(opcion > 1 || opcion < 0)
	{
		fprintf(stderr,"%s\n", "Error: Numero invalido\n");
    	return 1;
	}

  	/*Limpieza de buffer*/
  	while ((c=getchar()) != '\n' );
	

	/*Pedir y leer cadena de caractres*/
	printf("%s%d %s\n", MSJ_INGRESE_STR, MAX_STR_LENGTH,MSJ_CARACTERES);

	fgets(str_transformado, sizeof(str_transformado)+2,stdin);

	
	/*Traduccion*/
	switch (opcion)
	{
		case (MAYUSCULAS) :
			formato = FMT_MAYUSCULAS;
			break;

		case (MINUSCULAS) :
			formato = FMT_MINUSCULAS;
			break;

		default:
			formato = FMT_MAYUSCULAS;

	}

	/*Procesamiento*/
	switch(formato)
	{
		case (FMT_MAYUSCULAS) :
			/*Convertir caracteres a Mayusculas*/ /*Leo de str_lectura y guardo en str_transformado*/
			while(str_transformado[contador] != '\0')
			{
				
				i = str_transformado[contador];
				
				/*printf("%li\n", i);*/
						
				
				if( i < 123 && i > 96 )	/*Caracteres que son letras minusculas*/
				{

					i = i - 32; /*cambiando el valor de i al de su letra mayuscula*/
					
					transformador = i; 
					/*transforamdor es un tipo char, que toma el nuevo valor de i (el de la letra en mayuscula)*/
					
					str_transformado[contador] = transformador;
					/*Guarda en str_Mayusculas en la posicion de la letra original en minuscula, su nueva version transformada a mayusucula.*/
						
				}


				
				contador++;
				if(i == 32) /*Espacio*/
				{
					continue;
				}

				if( i < 91 && i > 64) /*Caracteres que son letras mayusculas*/
				{
					continue;
				}

				if(  i > 122 )	/*Caracteres que no son letras*/
				{
					
					str_transformado[contador-1] = ' ';	
					continue;

				}

				if(  i < 32)	/*Caracteres de control*/
				{

					str_transformado[contador-1] = ' ';	
					continue;
				
				}

				if(  i > 32 && i < 65 )	/*Caracteres entre el espacio y la A*/
				{
					str_transformado[contador-1] = ' ';
					continue;

				}
				
			}
			
			str_transformado[contador] = '\0';
			break;
		
		case (FMT_MINUSCULAS) :
			
			/*Convertir caracteres a minusculas*/
			while(str_transformado[contador] != '\0')
			{
				
				i = str_transformado[contador];
				
				/*printf("%li\n", i);	Es el valor en la tabla ASCII de cada caracter*/
						
				
				if( i < 91 && i > 64)
				{
					/*Caracteres que soy mayusculas. 
					Transformacion de mayusculas a minusculas*/
					/*str_minusculas [contador] = str_Mayusculas[contador];*/
					i = i + 32;
					transformador = i; 
					str_transformado[contador] = transformador;

				}
				contador++;

				if(i == 32)
				{
					continue;
					/*
					str_minusculas[contador] = str_Mayusculas[contador];
					*/
				}
				
				
				if( i < 123 && i > 96 )
				{	
					continue;
					/*Caracteres que son letras minusculas.
					Quedan iguales.*/
					/*
					str_minusculas[contador] = str_Mayusculas [contador];
					*/
				}
				
				if(  i > 122 )
				{
					str_transformado[contador - 1] = ' ';	
					continue;
					/*Caracteres que no son letras*/
				}

				if(  i < 32)
				{
					str_transformado[contador - 1] = ' ';	
					continue;
					/*Caracteres de control*/
				}

				if(  i > 32 && i < 65 )
				{
					str_transformado[contador - 1] = ' ';
					continue;
					/*Caracteres entre el espacio y la A*/
				}
				
				
			}
	
			str_transformado[contador] = '\0';
			
			break;
	
	}

	puts(str_transformado);
	
	return 0;
}