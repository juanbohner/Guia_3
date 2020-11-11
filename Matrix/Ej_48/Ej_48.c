#include <stdio.h>
#define N 10
int main() 
{
	int arr_1[N][N], arr_2[N][N], arr_producto[N][N];
	size_t i, j, c_1, c_2, r_1, r_2, k; 
	/*i = posicion_row; j = posicion_col; c_1 columnas totales de arr_1; c_2 colmnas totales de arr_2; r_1 filas totales de arr_1; r_2 filas totales de arr_2 */
	int valor, st, c;

	/*Obtencion de r_1*/
	printf("Enter rows and columns for matrix_1: \n");
    if(!(st = scanf("%ld", &r_1)))
  	{
    	fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
		return 1;
	}
	if (st == EOF)
   	return 1;
	while ((c=getchar()) != '\n' );
	
	/*Obtencion de c_1*/
	if(!(st = scanf("%ld", &c_1)))
  	{
    	fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
		return 1;
	}
	if (st == EOF)
   	return 1;
	while ((c=getchar()) != '\n' );

	/*Obtencion de r_2*/
	printf("Enter rows and columns for matrix_2: \n");
    if(!(st = scanf("%ld", &r_2)))
  	{
    	fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
		return 1;
	}
	if (st == EOF)
   	return 1;
	while ((c=getchar()) != '\n' );
	
	/*Obtencion de c_2*/
	if(!(st = scanf("%ld", &c_2)))
  	{
    	fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
		return 1;
	}
	if (st == EOF)
   	return 1;
	while ((c=getchar()) != '\n' );

	/*Comprobar si se puede hacer el producto*/
	if (c_1 != r_2)
	{
		fprintf(stderr, "No se puede hacer el producto de estas dos matrices\n");
		return 1;
	}

	
	/*Obtencion de la matriz arr_1*/
	for (i = 0; i < r_1; i++)
	{
		for (j = 0; j < c_1; j++) 
		{
		printf("Enter element a%ld%ld: ", i + 1, j + 1);
		if(!(st = scanf("%d", &valor)))
  		{
    		fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
    		return 1;
  		}
  		if (st == EOF)
    	return 1;
  		while ((c=getchar()) != '\n' );
		
		arr_1[i][j] = valor;
		}
	}
	
	/*Display matriz 1(arr_1)*/
	printf("\nEntered matrix: \n");
    for (i = 0; i < r_1; i++)
    {
	    for (j = 0; j < c_1; j++)
		{
            printf("%d|  ", arr_1[i][j]);
            if (j == c_1 - 1)
                printf("\n");
        }
		printf("\n");
	}


	/*Obtencion de la matriz arr_2*/
	for (i = 0; i < r_2; i++)
	{
		for (j = 0; j < c_2; j++) 
		{
		printf("Enter element a%ld%ld: ", i + 1, j + 1);
		if(!(st = scanf("%d", &valor)))
  		{
    		fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
    		return 1;
  		}
  		if (st == EOF)
    	return 1;
  		while ((c=getchar()) != '\n' );
		
		arr_2[i][j] = valor;
		}
	}
	
	
	/*Display matriz 2(arr_2)*/
	printf("\nEntered matrix: \n");
    for (i = 0; i < r_2; i++)
    {
	    for (j = 0; j < c_2; j++)
		{
            printf("%d|  ", arr_2[i][j]);
            if (j == c_2 - 1)
                printf("\n");
        }
		printf("\n");
	}


	/*calculado arr_producto*/
	for(i = 0; i < r_1; i++) 
	{
		for(j = 0; j < c_2; j++) 
		{
			arr_producto[i][j] = 0;

			for(k = 0 ; k < r_2; k++) {
				arr_producto[i][j] += arr_1[i][k] * arr_2[k][j];
			}
		}
	}
	
	
	/*Display matriz producto(arr_producto)*/
	printf("\nProducto de ambas matrices: \n");
    for (i = 0; i < r_1; i++)
    {
	    for (j = 0; j < c_2; j++)
		{
            printf("%d|  ", arr_producto[i][j]);
            if (j == c_2 - 1)
                printf("\n");
        }
		printf("\n");
	}
	return 0;
}