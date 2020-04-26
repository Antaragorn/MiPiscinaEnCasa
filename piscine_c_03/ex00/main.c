#include <stdio.h>

int		ft_strcmp(char*, char*);


int main()
{
	char s1[] = "hola";
	char s2[] = "hola";
	int a = ft_strcmp(s1, s2);

	printf("%s\n%s\n%d",s1,s2,a);
	
	return 0;
}
