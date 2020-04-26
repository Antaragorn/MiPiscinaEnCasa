#include <stdio.h>

int		ft_strncmp(char*, char*, unsigned int);


int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	unsigned int u = 5;
	int a = ft_strncmp(argv[1], argv[2], u);

	printf("%s\n%s\n%d",argv[1],argv[2],a);
	}
	
	return 0;
}

