#include <stdio.h>
#include <string.h>
int		ft_str_is_lowercase(char *str);
int main()
{
   char cadena[] = "ahj";

   printf( "Valor '1' si es minusculas, '0' si no.\n\nEl valor es: = %d\n", ft_str_is_lowercase(cadena) );

   return 0;
}