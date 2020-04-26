/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 23:19:41 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/11 23:19:41 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int n)
{
	char positivo;
	char negativo;

	negativo = 'N';
	positivo = 'P';
	if(n < 0)
		write(1, &negativo, 1);
	else
		write(1, &positivo, 1);
}