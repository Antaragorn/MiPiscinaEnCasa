#include <stdio.h>

int		ft_atoi(char *str);
int		ft_fibonacci(int index);
int		main(int argc, char *argv[])
{
	char *indice = &*argv[argc - 1];
	int numero = ft_atoi(indice);
	if (argc != 2)
	{
		puts("\n--ERROR--\n");
		puts("Numero de argumentos incorrecto.\n");
		return 0;
	}
	printf("\n%d",ft_fibonacci(numero));
	return 0;
}

int		ft_atoi(char *str)
{
	int		atoi;
	int		negative;

	atoi = 0;
	negative = 1;
	while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r'
			|| *str == '\f' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = negative * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = atoi * 10 + *str - 48;
		str++;
	}
	return (atoi * negative);
}
