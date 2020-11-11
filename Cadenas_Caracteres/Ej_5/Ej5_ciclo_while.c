#include <stdio.h>
int main()
{
   char str[] = "";
   size_t largo = 0;

   
   /*Calculating string length*/
   while (str[largo] != '\0')
    {
		largo++;
	}

	printf("%li\n", largo);
	return 0;
}