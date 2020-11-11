#include <stdio.h>
#include <string.h>
#define MSJ_VALOR_NUMERICO "El valor numerico que representa esa letra es: " 
#define MSJ_LETRA "La letra es: "
int main(void)
{
	int arr_caracter[] = {'a', 'e', 'i', 'o', 'u', '\0', '\n'};
	size_t x, i;
	int length;
	length = sizeof(arr_caracter)/ sizeof(arr_caracter[0]);  
	for(i = 0; i < length; i++ )
	printf("%s%c\n%s%d\n\n",MSJ_LETRA,arr_caracter[i],MSJ_VALOR_NUMERICO,arr_caracter[i]);
	
	return 0;
}