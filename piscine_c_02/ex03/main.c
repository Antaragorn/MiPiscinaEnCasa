#include <stdio.h>
#include <string.h>
int		ft_str_is_numeric(char *str);
int main()
{
   char cadena[] = "123245";

   printf( "Valor '1' si es numerico, '0' si no.\n\nEl valor es: = %d\n", ft_str_is_numeric(cadena) );

   return 0;
}