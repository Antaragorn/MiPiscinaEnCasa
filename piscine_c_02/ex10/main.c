#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main()
{
   char s2[] = "123456789";
   char s1[] = "";
   unsigned int a;
   unsigned int b = 5;	
   a = ft_strlcpy( s1, s2, b );
   printf( "s2= %s\n", s2 );
   printf( "s1= %s  valor devuelto por la funcion = %u;\n", s1, a );

   return 0;
}