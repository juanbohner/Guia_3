#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR 8
#define N 8
typedef enum
{
	TRUE,
	FALSE
} status_t;


int main(void)
{
	int arr[MAX_STR] = {1, 2, 3, 4, 5, 7, 6, 8};
	size_t i, longitud;
	
	
	for( i = 0, longitud = 0 ; i < (N) ; i++ )
	{
		
		if(arr[i] > arr[i+1])
		{
			break;
		}
		longitud++;
	}
	if(longitud == MAX_STR)
	printf("El arreglo esta oredenado en orden creciente\n");
	else
	printf("El arreglo no esta ordenado en orden creciente\n");

		for( i = 0 ; i < N	 ; i++ )
	{
		printf("%d,\t",arr[i]);
	}
	printf("\n");

	return TRUE;
}