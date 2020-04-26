/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 18:28:25 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/18 18:28:25 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	convert_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[num / 16], 1);
	write(1, &hex[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			convert_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}