#include <stdio.h>
#include <string.h>

char	ft_strcpy(char *dest, char *src);
int main()
{
   char s2[] = "abcdefgj11";
   char s1[] = "222";

   ft_strcpy( s1, s2 );
   printf( "s2=%s\n", s2 );
   printf( "s1=%s\n", s1 );

   return 0;
}