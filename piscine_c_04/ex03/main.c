#include <stdio.h>
//tengo que practicar con los argumentos en el main
int		ft_atoi (char *str);
int main(int argc, char *argv[])
{
	printf("%s\n",argv[argc - 1]);
	printf("%d",ft_atoi(argv[argc - 1]));

	return 0;
}
