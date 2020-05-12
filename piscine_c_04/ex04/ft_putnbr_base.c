
int		long_cadena(char *cadena)
{
	int		longitud;

	longitud = 0;
	while (cadena[longitud])
		longitud++;
	return longitud;
}

int		comprobar_base(char *base)
{
	int		longitud;
	int		i;
	int		j;

	i = 0;
	longitud = long_cadena(base);
	if (longitud == 0 || longitud == 1)
		return 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] < 32 || base[i] > 127 || base[i] == '+' || base[i] == '-')
			return 0;
		while (base[j])
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

void	convertidor(int numero, char *base)
{
	int		longitud;

	longitud = long_cadena(base);
	if (numero >= longitud)
		convertidor(numero / longitud, base);
	write(1,&base[numero % longitud],1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		numero;

	numero = nbr;
	if (comprobar_base(base))
	{
		if (nbr < 0)
		{
			write(1,'-',1);
			numero = -numero;
		}
		convertidor(numero, base);
	}
}