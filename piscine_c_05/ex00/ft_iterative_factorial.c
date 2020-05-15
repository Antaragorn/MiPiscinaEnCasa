/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 23:19:38 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/13 23:19:38 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		numero;
	int		i;

	i = nb;
	numero = nb;
	if (nb == 0)
		return 1;
	else if (nb < 0)
		return 0;
	while (i > i - i + 1)
	{
		i--;
		numero *= i;
	}
	return numero;
}