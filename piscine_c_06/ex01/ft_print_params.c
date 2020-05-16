/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 01:40:45 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/16 01:40:45 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	imprimir_cadena(char *cadena);

int		main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (argc > 1)
	{
		imprimir_cadena(argv[i]);
		i++;
	}
	return 0;
}
void	imprimir_cadena(char *cadena)
{
	while (*cadena)
	{
		write(1, &*cadena, 1);
		cadena++;
	}
	write(1,"\n",1);
}