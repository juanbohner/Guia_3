/*Programa que verifica si una cadena de caracteres es un palíndromo. Tanto para cadenas de longitud par e impar*/

#include <stdio.h>
#define MSJ_INGRESE_STR "Ingrese una cadena de caracteres \n"
#define MAX_STR_LENGTH 20
#define NRO_CARACTERES_FINAL_STR_TECLADO 2
/*
typedef enum{
	PAR,
	IMPAR
} caso_t;
*/
int main(void)
{
	char str_usr[MAX_STR_LENGTH]; 		/*Cadena de lectura*/
	char str_compare[MAX_STR_LENGTH];	/*Cadena de escritura*/
	
	/*variables para invertit*/
	size_t str_usr_length = 0,
	posicion_str_inversa , 			/*posicion del string compare (que es el inverso al str_usr)*/
	posicion_str_usr_last_c; 		/*Posicion del ultimo caracter distinto de \0 en str_usr*/
	size_t posicion_str_usr = 0; 	/*Variables de la posicio en str_usr*/
	

	/*Variables para comparar*/
	size_t posicion_str_compare = 0;/*Variable para comparar caracter a caracter*/
	
	int comparacion; 				/*Variable para hacer la resta entre caracteres en la comparacion*/
	

	/*peticion y obtencion de la cadena inicial*/
	printf("%s\n", MSJ_INGRESE_STR);

	fgets(str_usr,sizeof(str_usr) + NRO_CARACTERES_FINAL_STR_TECLADO,stdin);
	/*fgets va a obtener la cadena que introduzca por teclado, un \n que es el enter que escribo y un \0 de l final de la cadena de caracteres. Hay que tener en cpnsideracion que NO QUIERO introducir a la cadena invertida ese \n y el \0*/
	
	

	/*Inversion de la cadena de caracteres*/
   	while (str_usr[posicion_str_usr] != '\0')
	{	
		posicion_str_usr++;		
		str_usr_length++; 
		/*Para calcular la longitud de la cadena ingresada*/
	}
	/*termino parado en el ultimo caracter de str_usr (el \0)*/

   	posicion_str_usr_last_c= str_usr_length - NRO_CARACTERES_FINAL_STR_TECLADO;	/*No quiero pegarle a str_compare como primeros dos caracteres el \n y \0*/

   	for (posicion_str_inversa = 0; posicion_str_inversa < str_usr_length; posicion_str_inversa++) 
	{	
		str_compare[posicion_str_inversa] = str_usr[posicion_str_usr_last_c]; 

		posicion_str_usr_last_c--;

		/*Pego de 1 en 1 los caracteres del str_usr en el str_compare, solo que arranco pegango los ultimos caracteres de str_usr hasta el primero.*/ /*VOY DE ULTIMO A PRIMERO*/

	}
	str_usr[posicion_str_usr - 1] = '\0'; 
	/*Reemplazo el \n de str_usr por el NULL*/
	str_compare[posicion_str_usr] = '\0';
	/*Le agrego a str_compare el NULL como ultimo caracter*/

	puts(str_compare); 
	/*Para comprobar si pego invirtio correctamente a la cadena de caracteres */
	/*En este punto ya tengo invertido el arreglo str_usr en el arreglo str_compare*/
	
	
	
	/*Comparar cada posicion de str_usr con str_inversa*/
	
	/*Arranco comparando desde el primer caracter de cada arreglo(en la posicion 0)*/
	
	
	while((str_usr[posicion_str_compare] == str_compare[posicion_str_compare]) && str_usr[posicion_str_usr] != '\0' )
	{
		posicion_str_compare++;
	}
	
	/*En el caso de que sean iguales voy a estar comparando \0 de str_usr con \0 de str_compare. En el caso que sean distintos, voy a comprara dos caracteres distintos y esa resta no va a dar 0.*/
	comparacion = str_compare[posicion_str_compare] - str_usr[posicion_str_compare];

	printf("%d\n", comparacion); /*Resultado de la resta de comparacion*/

	if(comparacion == 0)
	{
		printf("Es una cadena palíndroma\n");
	}
	if (comparacion != 0)
	{
		printf("No es una cadena palíndroma\n");
	}

	return 0;
}