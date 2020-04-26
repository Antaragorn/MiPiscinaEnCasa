#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
   char s2[] = "abc";
   char s1[] = " ";

   ft_strncpy( s1, s2, 2 );
   printf( "s2= %s\n", s2 );
   printf( "s1= %s\n", s1 );

   return 0;
}