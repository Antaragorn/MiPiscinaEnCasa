#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
int main ()
{
  char str[] ="El cielo esta enladrillado y me fumao 3 canutos"; 
  puts (ft_strstr (str,"ca"));

  return 0;
}