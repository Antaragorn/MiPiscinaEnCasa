#include <stdio.h>
#include <string.h>
int		ft_str_is_alpha(char *str);
int main()
{
   char cadena[] = "gdfghD{FGHDFG";

   printf( "Valor '1' si es alfabetica, '0' si no.\n\nEl valor es: = %d\n", ft_str_is_alpha(cadena) );

   return 0;
}