/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:21:10 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/14 18:21:10 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		cont_cadena;

	cont_cadena = 0;
	while (str[cont_cadena])
	{
		cont_cadena++;
	}
	return cont_cadena;
}