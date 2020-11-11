#include <stdio.h>

int main(void)
{
	double arr_2 [2][2] =
	{
		{1, 2},
		{3, 4}
	};
	double arr_3 [3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	double det_2, det_3 = 0;
	double 
	a = arr_3[0][0], b = arr_3[0][1], c = arr_3[0][2],
	d = arr_3[1][0], e = arr_3[1][1], f = arr_3[1][2],
	g = arr_3[2][0], h = arr_3[2][1], i = arr_3[2][2];


	/*Determinante de la matriz de 2x2*/
	det_2 = (arr_2[0][0]* arr_2[1][1]) - (arr_2[0][1]* arr_2[1][0]);

	printf("El det de la matriz 2x2 es:%lf\n", det_2);

	det_3 = (a * ((e*i) - (f*h))) - (b * ((d*i) - (g*f))) + (c * ((d*h) - (e*g)));

	printf("El det de la matriz 3x3 es:%lf\n", det_3);	
	printf("%lf\n", arr_3[2][2]);	

	return 0;
}