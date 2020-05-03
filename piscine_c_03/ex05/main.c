#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char cadena1[13] = "cadena de"; 
    char *cadena2 = " ejemplos"; 
	
	int n;

	n = ft_strlcat(cadena1, cadena2, sizeof(cadena1));
	printf("%d\n",n);
	puts(cadena1);
	return 0;
}

