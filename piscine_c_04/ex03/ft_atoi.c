/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 01:59:34 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/09 01:59:34 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	transformador (char *str)
{
	int		num;
	int		aux; 
	int		i;
	int		j;
	int		k;
	
	i = 0;
	num = 0;
	while (str[i])
		i++;
	k = i;
	while (i != 0)
	{
		aux = str[k - i] - 48;
		j = i - 1;
		while (j > 0)
		{
			aux *= 10; 
			j--;
		}
		num += aux;
		i--;
	}
	return num;
}
int 	signosNeg (char *str)
{
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '-')
			j++;
		else if (str[i] >= 48 && str[i] <= 57)
			return j % 2;
		i++;
	}	
	return j % 2;  //si es par el modulo dara 0 y si no dara otro valor.
}
int comprobar_espacios(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == '\v' || c == '\f' ||\
	c == '\r' || c == '+' || c == '-')
		return 1;
	else
		return 0;
}
char	*limpia_cadena(char *str)
{
	int 	i;
	int		j;

	j = 0;	
	i = 0;
	while (str[i])
	{
		if (comprobar_espacios(str[i]) && !(str[i - 1] >= '0' && str[i - 1] <= '9'))
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			{
				str[j] = str[i];
				j++;
				i++;
			}
		else if ((str[i] < '0' || str[i] > '9'))
			{
				str[j] = 0;
				return str;
			}
		else
			i++;	
	}
	return str;
}
int		ft_atoi (char *str)
{
	if (signosNeg(str))
		return -transformador(limpia_cadena(str));
	else
		return transformador(limpia_cadena(str));
}

/***Esta es una version que he encontrado por internet
 * Es muchisimo mas reducida en codigo con una diseccion bastante mejor del probleba en otros problemas
 * mas pequeños, pero funcionan exactamen te igual.
 *   
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
}*/