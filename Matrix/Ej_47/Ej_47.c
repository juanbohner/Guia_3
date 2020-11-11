#include <stdio.h>
int main() 
{
    int arr[10][10], arr_t[10][10], r, c, i, j;
	/*i = posicion_row; j = posicion_col; r = num_rows; c = num_cols*/
    printf("Enter rows and columns: \n");
    scanf("%d", &r);
	scanf("%d", &c);
	if( r != c )
	{
		fprintf(stderr,"ERROR. Para ser una matrizsimetrica tiene que tener la misma cantidd de filas y columnas\n");
		return 1;
	}
    /* Assigning elements to the matrix */
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; i++)
	{
        for (j = 0; j < c; j++) 
		{
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
	}
    /* Displaying the matrix a[][] */
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; i++)
    {
	    for (j = 0; j < c; j++)
		{
            printf("%d|  ", arr[i][j]);
            if (j == c - 1)
                printf("\n");
        }
	}

    /* Finding the transpose of matrix a */
    for (i = 0; i < r; i++)
	{
        for (j = 0; j < c; j++)
		{
            arr_t[j][i] = arr[i][j];
        }
	}

    /* Displaying the transpose of matrix a */
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++)
    {    
		for (j = 0; j < r; j++)
		{
            printf("%d|  ", arr_t[i][j]);
            if (j == r - 1)
                printf("\n");
        }
	}

	for(i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if(arr[i][j] != arr_t[i][j])
			{
				fprintf(stderr, "La matriz no es simetrica\n");
				return 1;
			}
		}
	}
	printf("La matriz es simetrica\n");

    return 0;
}