/* Example using strcpy */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char example[35];	/*Tiene que tener memeoria suficiente*/

    /* Copia el string "Hola Mundo!" */
    strcpy (example, "Hola Mundo!");

    /* Display the contents of the example variable to the screen */
    printf("%s\n", example);
	puts(example);

    return 0;
}