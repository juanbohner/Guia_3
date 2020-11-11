#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR 10
#define AMOUNT_N 10
#define pi 3.1415
typedef enum
{
	TRUE,
	FALSE
} status_t;


int main(void)
{
	double arr[MAX_STR];
	size_t t;

	float A, f, phi;

	printf("Introduzca el valor de la amplitud (A), de la freciencia (f) y de la fase inicial.\n");

	/*Falta validar y limpiar el buffer.*/
	scanf("%f", &A);
	scanf("%f", &f);
	scanf("%f", &phi);

	for(t = 0; t < AMOUNT_N; t++)
	{
		arr [t] = A * sin ((2 * pi * t) + phi);
	}
	
	for( t = 0 ; t < AMOUNT_N	 ; t++ )
	{
		printf("%lf,\t",arr[t]);
	}
	printf("\n");

	return TRUE;
}