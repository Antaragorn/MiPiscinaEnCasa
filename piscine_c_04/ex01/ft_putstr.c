/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 22:05:42 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/13 22:05:42 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)   // es el mismo ejercicio que se hizo en un tema anterior.
{
	int		i;

	i = 0;
	while (str[i])                   
	{
		write(1, &str[i], 1);
		i++;
	}
}
