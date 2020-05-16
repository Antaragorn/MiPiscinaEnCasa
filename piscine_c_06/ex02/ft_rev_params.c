#include <stdio.h>

void	imprimir_cadena(char *cadena);

int		main(int argc, char *argv[])
{
	while (argc > 1)
	{
		imprimir_cadena(argv[argc - 1]);   // imprime los argumentos empezando desde el ultimo.
		argc--;
	}
	return 0;
}
void	imprimir_cadena(char *cadena)
{
	while (*cadena)
	{
		write(1, &*cadena, 1);
		cadena++;
	}
	write(1,"\n",1);
}