#include <stdio.h>
void	ft_atoi_base(char *str, char *base);
int		transformador(char *cadena);
int main(int argc, char *argv[])
{
	char *char_numero = &*argv[argc - 2];
	char *cadena = &*argv[argc - 1];
	if (argc != 3)
	{
		printf("Error en el numero de argumentos");
		return 0;
	}
	ft_atoi_base(char_numero,cadena);
	return 0;
}

// int transformador(char *cadena)
// {
// 	int numero = 0;
// 	while (*cadena >= '0' && *cadena <= '9')
// 	{
// 		numero = numero * 10 + *cadena - 48;
// 		cadena++;
// 	}
// 	return numero;
// }
