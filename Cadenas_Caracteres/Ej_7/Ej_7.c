#include <stdio.h>
#define N 10

int main(void) {

	char s[N] = "hola";
	char t[N] = "mundo";

	size_t j = 0;	/*Posicion de s*/
	size_t i = 0;	/*Posicion de t*/
	
	while(t[i] != '\0')	/*Contador de lo largo que es t*/
	{
		i++;
	}
	/*i = 5 (elemento 6 de t = NULL ) */

	while(((t[i] = s[j]) != '\0') && (i < N-1 ))
	{
		i++;
		j++;

		/*
		(1)
		En la primera iteracion del ciclo, la primera condicion, le esta asiganando a la posicion i de t (t[i]), el valor de la posicion 0 de s (s[j], con j = 0 ). Esto funciona porque la posicion i del arreglo t (i=5) en este caso seria el elemento numero 6, es el NULL (\0). Estamos reemplazando al NULL por el primer elemento de s(posicion 0).
		Despues hacemos i++ y j++. La segunda condicion nos importa para terminar con el ciclo. Nos estaria quedando el arreglo t con caracteres hasta su anteultima posicion(Elemnto N). Reservamos esa ultima para despues del ciclo ponerle el caracter del NULL que sobreescribimos previamente.
		
		(2)
		En la segunda iteracion, i = 6 y j = 1.  Ahora en el elemeento(7) de la posicion 6,que incialmente no habia nada, se va a escribir el segundo elemento de el arreglo s (posicion 1).
	    */
	}
	/*Al salir del ciclo falta el NULL al final del arreglo t(En la posicion N-1)*/
	t[N-1] = '\0';	/*(N-1)=i*/
	

	puts(t);
	puts(s);

	return 0;

}