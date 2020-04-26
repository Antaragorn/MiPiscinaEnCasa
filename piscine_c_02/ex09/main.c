#include <stdio.h>

char	*ft_strcapitalize(char *str);
int main()
{
	char str[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("\n%s", str);
	printf("\n%s", ft_strcapitalize(str));
	return 0;
}
