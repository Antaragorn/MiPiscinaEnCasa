#include <stdio.h>

int		ft_strlen(char *str);
int main(void)
{
	char cadena[] = "Hola que tal";

	puts(cadena);
	printf("%d",ft_strlen(cadena));

	return 0;
}