#include <stdio.h>
#include <string.h>
char	*ft_strupcase(char *str);
int main()
{
   char cadena[] = "ab FKFGOIab";

   printf( "\nLa cadena antes de la funcion: %s\n\n", cadena );
   printf( "La cadena despues de la funcion: %s\n\n", ft_strupcase(cadena) );

   return 0;
}