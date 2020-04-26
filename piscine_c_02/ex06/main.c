#include <stdio.h>
#include <string.h>
int		ft_str_is_printable(char *str);
int main()
{
   char cadena[] = "[]{}]";

   printf( "\nValor '1' si es imprimible, '0' si no.\n\nEl valor es: = %d\n\n", ft_str_is_printable(cadena) );

   return 0;
}