#include <stdio.h>
#include <string.h>
#define MAX_STR 8
typedef enum
{
	TRUE,
	FALSE
} status_t;


int main(void)
{
	int arr[MAX_STR] = {0, 3, 7, 2, 9, 27, 34, -5};
	size_t i, n;
	int Max, min;

	Max = arr [0];
	min = arr [0];
	n = sizeof(arr) / sizeof( arr[0] );
	printf("%ld\n", n);
	
	for( i = 1 ; i < MAX_STR ; i++ )
	{
		if(arr[i] > Max)
		{
			Max = arr [i];
		}
		if( arr[i] < min)
		{
			min = arr[i];
		}

	}
	printf("El max es:%d\tEl min es:%d\n", Max, min);

	return TRUE;
}