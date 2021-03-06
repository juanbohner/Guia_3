#include <stdio.h>

int main(void)
{
	char str_1[] = "abcdef";
	char str_2[] = "abcdefghj";
	int comparacion;
	size_t posicion = 0;

	/*Le comparamos al str_1 el str_2.*/

	while( (str_1[posicion] == str_2[posicion]) && str_1[posicion] != '\0')
	{
		posicion++;
	}

	/*
	Si el str_1 es mayor entonces comparacion > 0.
	Si el str_1 es menor entonces comparacion < 0.
	Si str_1 es igual a str_2 entonces comparacion = 0. 
	*/
	comparacion = str_1[posicion] - str_2[posicion];
	printf("%d\n", comparacion);
	/*
	En el caso que el str_2 sea mas largo,  se va a dar el caso donde str[posicion] = '\0'(en la ultima posicion, con el elemento NULL).
	Entonces, no entra al ciclo while y el valor de posicion es el de la ultima posicion del arreglo str_1.
	Como en esta posicion el arreglo str_1 tiene el caracter NULL de valor 0 en la tabla ASCII, al hacer la resta:

	comparacion = str_1[posicion] - str_2[posicion]; 
	es equivalente a hacer comparacion = NULL - str_2[posicion], Al pasarlo a sus valores numericos de la tabla ASCII es como comparacion = 0 - (posicion de el caracter en la tabla ASCII)
	*/
	return 0;
}