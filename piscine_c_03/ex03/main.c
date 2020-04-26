#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);


int main()
{
	char cadena1[126] = "Cadena de"; 
    char *cadena2 = " ejemplo"; 
	unsigned int limite = 5;
 
	printf("\n%s",ft_strncat(cadena1,cadena2, limite));
	
	return 0;
}

