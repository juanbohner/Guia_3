#include <stdio.h>
#include <string.h>
#define CHARACTERS_COMPARED 17

int main () {
   char str1[15];
   char str2[15];
   int ret;
   size_t n = CHARACTERS_COMPARED;
   
/*No importa si pones un n mayor que el tamaño de los arreglos a comparar.*/

   strcpy(str1, "abCdef");
   strcpy(str2, "abcDef");
/*
int strncmp(const char *str1, const char *str2, size_t n)
compara de la misma manera que strcmp, solo que se define dentro de la funcion el numero de caracteres que seran comparados.
*/

   ret = strncmp(str1, str2, n);

   if(ret < 0) {
      printf("str1 is less than str2\n");
   }
   if(ret > 0) {
      printf("str2 is less than str1\n");
   } 
   if (!ret)
   {
      printf("str1 is equal to str2\n");
   }
   
   return(0);
}