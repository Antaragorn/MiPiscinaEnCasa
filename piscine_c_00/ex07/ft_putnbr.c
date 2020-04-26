/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumeror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 02:12:45 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/13 02:12:45 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int numero)
{
	if (numero < 0)
	{
		write(1, "-", 1);
		numero = -numero;
	}
	if (numero >= 10)
	{
		ft_putnbr(numero / 10);
	}
	numero = numero % 10 + 48;
	write(1, &numero, 1);
}
