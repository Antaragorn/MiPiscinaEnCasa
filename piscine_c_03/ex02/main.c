#include <stdio.h>

char	*ft_strcat(char *dest, char *src);


int main()
{
	char *cadena1 = "Cadena de"; 
    char *cadena2 = " ejemplo"; 
    char cadena3[126];
 
    strcpy(cadena3, cadena1); 
	printf("\n%s",ft_strcat(cadena3,cadena2));
	
	return 0;
}

