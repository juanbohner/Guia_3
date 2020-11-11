#include <stdio.h>
#define MAX_STR_LEGTH 10
#define MSJ_ENTER_INT_NUMBER "Ingrese un numero entero"
#define MSJ_ERROR_NOT_A_NUMBER "Se ingreso algo distinto de un numero."
#define MSJ_PROMEDIO_TOTAL "El promedio aritmetico de lo numeros ingresados es:\t"

int main(void)
{
	int str[MAX_STR_LEGTH];
	size_t posicion_str = 0;
	int num_entero, n;
	int st, c;
	int num_sumados = 0;
	float promedio;

	printf("Ingrese la cantidad esperada de elementos a promediar\n");
	/*Obtencion de cantidad n de elementos a promediar*/
	if((st = scanf("%i", &n)) == 0 )
	{
		fprintf(stderr, "%s\n", MSJ_ERROR_NOT_A_NUMBER);
		return 1;
	}

	if(st == 0)
		return 1;

	while ((c=getchar()) != '\n' );

	if( n < 0 )
	{
		fprintf(stderr,"no se puede analizar un numero negativo de elementos");
		return 1;
	}

	while (posicion_str < n)
	{
		
		printf("%s\n", MSJ_ENTER_INT_NUMBER);
		if((st = scanf("%d", &num_entero)) == 0 )
		{
			fprintf(stderr, "%s\n", MSJ_ERROR_NOT_A_NUMBER);
			return 1;
		}

		if(st == 0)
			return 1;
		
		while ((c=getchar()) != '\n' );


		str[posicion_str] = num_entero;
		posicion_str++;
		num_sumados += num_entero;
	}

	posicion_str = 0;
	printf("El arreglo de numero que ingreso es el siguiente:");
	
	while (posicion_str < n)
	{
		printf("%d,\t", str[posicion_str]);
		posicion_str++;
	}
	promedio = (float) num_sumados/n;

	printf("\n%s%.3f\n", MSJ_PROMEDIO_TOTAL, promedio);

	return 0;
}