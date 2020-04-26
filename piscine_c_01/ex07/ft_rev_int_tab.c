/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:40:07 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/14 18:40:07 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_rev_int_tab(int *tab, int size)
{
	int 	i;
	int		aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = aux;
		i++; 
	}
}