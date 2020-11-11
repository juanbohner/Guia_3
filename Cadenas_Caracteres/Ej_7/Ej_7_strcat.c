#include <stdio.h>
#include <string.h>

int main () {
   char source[35], destination[35];

   strcpy(source,  "This is source");
   strcpy(destination, "This is destination");
   /*Copia una cadena de caracteres dentro de un arreglo.
   formato:	strcpy(<nombre>, "cadena de caracteres")*/

   strcat(destination, source); 
   /*formato:	strcat(<destino>, <fuente>)*/

   printf("Final destination string : |%s|", dest);
   
   return(0);
}