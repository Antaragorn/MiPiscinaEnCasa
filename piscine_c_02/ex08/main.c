#include <stdio.h>
#include <string.h>
char	*ft_strlowcase(char *str);
int main()
{
   char cadena[] = "ab FKFGOIab.-,´`+`/*";

   printf( "\nLa cadena antes de la funcion: %s\n\n", cadena );
   printf( "La cadena despues de la funcion: %s\n\n", ft_strlowcase(cadena) );

   return 0;
}