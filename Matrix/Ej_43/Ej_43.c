#include <stdio.h>
#define N 4

int main(void)
{	
	double arr[N][N] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},

	};
	size_t row, col;
	int traza;
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
	printf("La traza es igual a: %d\n", traza);
	return 0;
}