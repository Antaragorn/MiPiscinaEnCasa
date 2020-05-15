/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 00:52:53 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/15 00:52:53 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (i * i < nb)		//multiplico i por si misma hasta encontrar un nº que multiplicado por si mismo de nb.
		i++;				//al salir del bucle pueden pasar 2 cosas, que i == nb || i > nb.
	if (i * i == nb)
		return i;
	else
		return 0;
}