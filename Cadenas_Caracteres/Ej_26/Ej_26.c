#include <stdio.h>
#define MAX_STR_LENGTH 40
#define MSJ_ENTER_STR_1 "Ingrese la primera cadena de caracteres"
#define MSJ_ENTER_STR_2 "Ingrese la segunda cadena de caracteres"
#define MSJ_ENTER_INTEGER "Ingrese un numero donde desee colocar la seguanda cadena dento de la primer cadena."

int main(void)
{
	char str_1[MAX_STR_LENGTH]; 
	char str_2[MAX_STR_LENGTH];
	size_t posicion_str_1 = 0, posicion_str_2 = 0;
	int num;

	printf("%s\n", MSJ_ENTER_STR_1);
	fgets(str_1, sizeof(str_2) + 2, stdin);
	printf("%s\n", MSJ_ENTER_STR_2);
	fgets(str_2, sizeof(str_2) + 2, stdin);
	printf("%s\n", MSJ_ENTER_INTEGER);

	scanf("%d", &num);

	while ((str_1[posicion_str_1] != '\0') && (str_2[posicion_str_2] != '\0'))
	{
		str_1[num] = str_2[posicion_str_2];
		num++;
		posicion_str_2++;
		posicion_str_1++;
	}
	str_1[num] = '\0';

	puts(str_2);
	puts(str_1);

	return 0;
}