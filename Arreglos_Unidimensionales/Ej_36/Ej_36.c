#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR 10
#define AMOUNT_N 10
#define pi 3.1415
#define MSJ_GRADO "Introduzca el grado del polinomio"
#define MSJ_GRADO_ERROR "El grado del polinomio es muy grande para este programa. Introduzca uno igual o menor a:"
#define MSJ_X "Introduzca el valor de la variable independiente x puntualmente."
#define MSJ_RESULTADO_PUNTUAL "Resultado puntual del polinomio en x = : "
#define MSJ_ES "Es: "
typedef enum
{
	TRUE,
	FALSE
} status_t;


int main(void)
{
	/* Pg(x)= a0 x + a1 x + a2 x^2 + a3 x^3 + ... ag x^g
		= a0 + x (a1 + a2 x + a3 x^2 + ...)
		= a0 + x (a1 + x (a2 + a3 x + a4 x^2 + ...)
		= a0 + x (a1 + x (a2 + x (a3 + a4 x + ...)
		= a0 + x (a1 + x (a2 + x (a3 + a4 x + ... x (ag-1 + x ag))))
	*/ 
	int arr_coeficientes[MAX_STR];
	size_t i, grado;

	int coeficiente,st,c;
	
	double x, resultado;

	/*Obtencion del grado del polinomio*/
	printf("%s\n", MSJ_GRADO);

	if(!(st = scanf("%lud", &grado)))
	{
		fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
		return FALSE;
	}
	if (st == EOF)
		return FALSE;
	while ((c=getchar()) != '\n' );
	
	grado++;
	if(grado > MAX_STR)
	{
		fprintf(stderr, "%s\t%d\n", MSJ_GRADO_ERROR,MAX_STR);
		return FALSE;
	}

	/*Obtencion de los coeficientes*/
	for(i = 0; i < grado; i++)
	{	
		printf("Introduzca un coeficiente:\n");
		if(!(st = scanf("%i", &coeficiente)))
		{
			fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
			return FALSE;
		}
		if (st == EOF)
			return FALSE;

		/*Limpieza de buffer*/
		while ((c=getchar()) != '\n' );

		arr_coeficientes [i] = coeficiente;
	}

	/*Obtencion del valor de x puntualmente.*/
	printf("%s\n", MSJ_X);

	if(!(st = scanf("%lf", &x)))
	{
		fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
		return FALSE;
	}
	if (st == EOF)
	{
		return FALSE;		
	}
	while ((c=getchar()) != '\n' );


	/*Aplicando la regla de horner*/
	for (resultado = 0, i = 0; i < grado; i++)
	{
 		resultado = resultado * x + arr_coeficientes[grado-i-1];
		/*Se invierte el orden de los coeficientes del polinomio para evitar operaciones aritmeticas inecesarias*/
	}
	printf("%s%lf\t%s%lf\n", MSJ_RESULTADO_PUNTUAL, x, MSJ_ES,resultado);

	return TRUE;
}