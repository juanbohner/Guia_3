#include <stdio.h>
#define MAX_MONTHS 12
typedef enum
{
	ENERO,
	FEBRERO,
	MARZO,
	ABRIL,
	MAYO,
	JUNIO,
	JULIO,
	AGOSTO,
	SEPTIEMBRE,
	OCTUBRE,
	NOVIEMBRE,
	DICIEMBRE
} mes_t;

int main(void)
{
	char months[MAX_MONTHS][10] = 
	{ 
		"January",
		"February",
		"March",
		"April",
		"May",
		"Juni",
		"July",
		"Agust",
		"September",
		"October",
		"November",
		"December"
	};
	int opcion = 4;
	mes_t mes;

	/*Traduccion*/
	switch(opcion) {
		case ENERO:
			mes = ENERO;
			break;
		
		case FEBRERO:
			mes = FEBRERO;
			break;
		
		case MARZO:
			mes = MARZO;
			break;
		
		case ABRIL:
			mes = ABRIL;
			break;
		
		case MAYO:
			mes = MAYO;
			break;

		case JUNIO:
			mes = MAYO;
			break;
					
		case JULIO:
			mes = JULIO;
			break;
							
		case AGOSTO:
			mes = AGOSTO;
			break;
							
		case SEPTIEMBRE:
			mes = SEPTIEMBRE;
			break;
							
		case OCTUBRE:
			mes = OCTUBRE;
			break;
							
		case NOVIEMBRE:
			mes = NOVIEMBRE;
			break;
				
		case DICIEMBRE:
			mes = DICIEMBRE;
			break;
							
		default:
			mes = ABRIL;
			break;
	}

	puts(months[mes]);
	return 0;
}