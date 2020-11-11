#include <stdio.h>
#define N 4

int main(void)
{	
	double arr[N][N];
	double valor, traza;
	size_t row, col;
	int st, c;
	/*Obtencion de la matriz*/
	for (row = 0; row < N; row++)
	{
		for (col = 0; col < N; col++)
		{
			printf("Ingrese un numero para la posicion: %ld,%ld\n", row, col);
			if(!(st = scanf("%lf", &valor)))
  			{
    			fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
    			return 1;
  			}
  			if (st == EOF)
    		return 1;
  			/*Limpieza de buffer*/
  			while ((c=getchar()) != '\n' );
			arr[row][col] = valor;
		}
		printf("\n");
	}
	
	/*Imprimir la matriz*/
	for (row = 0; row < N; row++)
	{
		for (col = 0; col < N; col++)
		{
			printf("%lf|\t", arr[row][col]);
		}
		printf("\n");
	}

	for (row = 0, traza = 0; row <= N; row++)
	{
		traza += arr[row][row];
	}
	printf("La traza es igual a: %lf\n", traza);
	return 0;
}