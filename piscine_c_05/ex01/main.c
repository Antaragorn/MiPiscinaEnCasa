#include <stdio.h>

int 	ft_atoi(char *cadena);
int 	ft_recursive_factorial(int nb);

int 	main(int argc, char *argv[])
{
	char *cad_numero_argumento = &*argv[argc - 1];

	if (argc != 2)
	{
		puts("\n--ERROR--\n");
		puts("Numero de argumentos incorrecto.\n");
		return 0;
	}
	printf("%d",ft_recursive_factorial(ft_atoi(cad_numero_argumento)));

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
