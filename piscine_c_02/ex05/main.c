#include <stdio.h>
#include <string.h>
int		ft_str_is_uppercase(char *str);
int main()
{
   char cadena[] = "ASDF";

   printf( "\nValor '1' si es mayusculas, '0' si no.\n\nEl valor es: = %d\n\n", ft_str_is_uppercase(cadena) );

   return 0;
}