
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   /*strcpy(str, "98993489");*/
   str[0] = '3';
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   /*atoi transforma el valor de str a un entero. Para numeros el valor de val es el mismo numero que tenemos adentro del arreglo. */

   strcpy(str, "\0");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   /*Para letras toma el valor 0*/

   return(0);
}