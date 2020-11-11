#include<stdio.h>
#define MAX_STR_LENGTH 20
#define MSJ_ENTER_NUM "Ingrese un numero entero:"

int main (void)
{	
	long decimal_num;
	long binary_num = 0;
	/*Arranca en 0 para el caso que el usuario ingrese 0 como numero*/
    unsigned long potencia_diez = 1; 
	int resto;
	/*La variable potenica_diez arranca valiendo 1 porque es como si tuviera 10^0 = 1. */ 
	char str_binary_num[MAX_STR_LENGTH];


	printf("%s\t", MSJ_ENTER_NUM);
	scanf("%li", &decimal_num); /*Falta validar*/

    while (decimal_num!=0)
    {

        resto = decimal_num%2; 
		/*Si el numero es par da 0 y si es impar da 1*/
        
		decimal_num /= 2; 
        
		binary_num += (resto * potencia_diez);
        potencia_diez *= 10;
    }

	sprintf(str_binary_num,"%ld", binary_num);

	printf("%li\n", binary_num);
	printf("\n\n");

	puts(str_binary_num);
	
	return 0;
}
