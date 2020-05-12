/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:35:16 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/03 17:35:16 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;				
	while (str[i])			//recorrera toda la cadena hasta el valor nulo.
		i++;
	return i;				//devuelve el número de iteracciones que coincide con el tamaño de la cadena.
}
