#include <stdio.h>
#define MAX_STRING_LENGTH 10
int main () {
   FILE *fp;
   char str[MAX_STRING_LENGTH];

   /* opening file for reading */ /*Esto me lo robe de una pagina web con un ejemplo*/
   fp = fopen("file.txt" , "r");
   if(fp == NULL) 
   {
      fprintf(stderr,"Error opening file\n");
      return 1;
   }
   
   /* Cuando introduciomos los caracteres de str por el archivo fp, podemos pasar un archivo vacio y obtener el NULL. Si lo hacemos por la consola, al apretar enter, lo que lee es \n que lo cuenta como un caracter adelante del \0 al final.*/

   if( fgets (str, MAX_STRING_LENGTH + 2, fp) == NULL ) 
   {
      fprintf(stderr,"Arreglo de caracteres vacio\n");
	  return 1;
   }

   fputs(str, stdout);
   
   fclose(fp);
   
   return 0;
}