/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 13:34:13 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/15 13:34:13 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i)       //comprueba el modulo buscando el 0, al salir del bucle si nb, que ha sido dividido ->
		i++;			//->por i, con resto 0, es igual a i significa que nb solo se puede dividir por si mismo.
	if (nb == i)
		return 1;
	else
		return 0;
}