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
	char str_lectura[MAX_STR_LENGTH]; /*string donde se guarda lo que ingresa el usuario*/
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

	fgets(str_lectura, sizeof(str_lectura)+2,stdin);

	
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
			while(str_lectura[contador] != '\0')
			{
				
				i = str_lectura[contador];
				
				/*printf("%li\n", i);*/
						
				
				if( i < 91 && i > 64) /*Caracteres que son letras mayusculas*/
				{
					str_transformado[contador] = str_lectura[contador];
				}
				

				if(i == 32) /*Espacio*/
				{
					str_transformado[contador] = str_lectura[contador];
				}

				
				if( i < 123 && i > 96 )	/*Caracteres que son letras minusculas*/
				{
					i = i - 32; /*cambiando el valor de i al de su letra mayuscula*/
					
					transformador = i; 
					/*transforamdor es un tipo char, que toma el nuevo valor de i (el de la letra en mayuscula)*/
					
					str_transformado[contador] = transformador;
					/*Guarda en str_Mayusculas en la posicion de la letra original en minuscula, su nueva version transformada a mayusucula.*/
					
					
				}
				
				contador++;

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
			
			/*Convertir caracteres a minusculas*/ /*Leo de str_Mayusculas y escribo en str_minusculas*/
			while(str_lectura[contador] != '\0')
			{
		
				i = str_lectura[contador];
				
				/*printf("%li\n", i);	Es el valor en la tabla ASCII de cada caracter*/
						
				
				if( i < 91 && i > 64)	/*Caracteres que soy mayusculas*/
				{
					 
					/*Transformacion de mayusculas a minusculas*/
					str_transformado[contador] = str_lectura [contador];
					i = i + 32;
					transformador = i; 
					str_transformado[contador] = transformador;

				}
				

				if(i == 32)/*Espacio*/
				{
					
					str_transformado[contador] = str_lectura[contador];
					
				}

				
				if( i < 123 && i > 96 )	/*Caracteres que son letras minusculas. Quedan iguales.*/
				{	
					
					str_transformado[contador] = str_lectura [contador];
					
				}

				contador++;

				if(  i > 122 )	/*Caracteres que no son letras*/
				{
					str_transformado[contador - 1] = ' ';	
					continue;
					
				}

				if(  i < 32)	/*Caracteres de control*/
				{
					str_transformado[contador - 1] = ' ';	
					continue;
					
				}

				if(  i > 32 && i < 65 )	/*Caracteres entre el espacio y la A*/
				{
					str_transformado[contador - 1] = ' ';
					continue;
					
				}
			
				
			
			}
	
			str_transformado[contador] = '\0';
			
			break;
	
	}

	puts(str_transformado);
	
	return 0;
}