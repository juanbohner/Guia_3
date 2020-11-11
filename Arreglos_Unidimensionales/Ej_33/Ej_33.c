#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR 8
#define AMOUNT_N 7
typedef enum
{
	TRUE,
	FALSE
} status_t;


int main(void)
{
	int arr[MAX_STR];
	size_t i, N = AMOUNT_N;
	
	
	for( i = 0 ; i < AMOUNT_N	 ; i++ )
	{
		arr[i] = rand() % 49;
	}
		for( i = 0 ; i < AMOUNT_N	 ; i++ )
	{
		printf("%d,\t",arr[i]);
	}
	printf("\n");

	return TRUE;
}