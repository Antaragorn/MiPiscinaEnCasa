#include <stdio.h>

int		ft_atoi(char *str);
int		ft_iterative_power(int nb, int power);
int		main(int argc, char *argv[])
{
	char *base_str = &*argv[argc - 2];
	char *exponente_str = &*argv[argc - 1];
	int base = ft_atoi(base_str);
	int exponente = ft_atoi(exponente_str);

	if (argc != 3)
	{
		puts("\n--ERROR--\n");
		puts("Numero de argumentos incorrecto.\n");
		return 0;
	}
	printf("\n%d elevado a %d es = %d\n\n", base, exponente, ft_iterative_power(base, exponente));
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