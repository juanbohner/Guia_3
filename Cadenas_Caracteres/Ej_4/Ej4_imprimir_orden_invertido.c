/*
#include <stdio.h>


int main(void)
{
	char str[] = "Hola";
	size_t i;


	for (i=sizeof(str); i > 0 ; i--)
	{
	fputs(str[i],stdout);
	printf("%ld\n", i);
	}
	return 0;
}
*/

#include <stdio.h>
#define MAX_STR_LENGHT 15
int main()
{
   	char s[MAX_STR_LENGHT], r[MAX_STR_LENGHT];
  	int posicion_str_r, posicion_str_s_last_c, posicion_s = 0, str_s_length;

   	printf("Input a string\n");

   	fgets(s,sizeof(s)+2,stdin);


   	while (s[posicion_s ] != '\0') /*Calculating string length*/
	{
		posicion_s ++;
		str_s_length++; /*contador*/
	}
	/*final === posicion_str_s_last_c*/
   	posicion_str_s_last_c= str_s_length - 1; /*Last character is \0*/

   	for (posicion_str_r = 0; posicion_str_r < str_s_length; posicion_str_r++) 
	{	
		r[posicion_str_r] = s[posicion_str_s_last_c]; 

		posicion_str_s_last_c--;

	  /*En la primer iteracion, al arreglo r, le asignamos(en la posicion 0) como primer caracter el anteultimo caracter del arreglo s (el ultimo seria el \0).
	  Despues a la variable Final, le restamos 1,para que en la proxima iteracion estariamos guardando en r (en la posicion 1(posicion anterior(0) + 1)) el antepeultimo (anteultimo - 1) caracter. Despues este ciclo continuaria hasta que se cumpla que inicio sea igual a el contador (la cantidad de caracteres que tiene el arreglo que ingresamos) */

	}

	r[posicion_str_r] = '\0';
   /*Aca el valor de inicio es igual a (largo de la cadena de caracteres del arreglo) + 1, debido a que es igual al valor de contador. Entonces en la ultima posicion del arreglo agregamos el caracter NULL (\0), que indica que termino el arreglo. */
	
	puts(r);
	fputs(r, stdout);
	printf("%s\n", r);

	return 0;
}