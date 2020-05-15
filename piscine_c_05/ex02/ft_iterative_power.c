/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 17:48:40 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/14 17:48:40 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		numero;

	numero = nb;
	if (nb == 0)
		return 1;
	while (power > 1)
	{
		numero *= nb;
		power--;
	}
	return numero;			// me he dado cuenta de que sin esta sentencia return la funcion devuelve la variable "numero". 
}
