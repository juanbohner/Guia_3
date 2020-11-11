#include <stdio.h>
#define MAX 5
int main(void)
{
	int arr[MAX][MAX] = 
	{
		{1, 2, 3, 4, 5},
		{6, 7, 49, 9, 10},
		{34, 12, 13, 14, 15},
		{34, 12, 29, -3, 15},
		{34, 12, 45, 14, -34}
	};
	size_t i, j;

	int max, min;

	max = arr[0][0];
	min = arr[0][0];

	for ( i = 0; i < MAX; i++)
	{
		for (j=1; j < MAX; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr [i][j];
			}
			if(arr[i][j] < min)
			{
				min = arr [i][j];
			}
		}
	}
	printf("El max es: %d\n", max);
	printf("El min es: %d\n", min);

	return 0;
}