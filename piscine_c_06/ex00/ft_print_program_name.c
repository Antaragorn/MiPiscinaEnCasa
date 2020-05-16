/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 01:40:53 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/16 01:40:53 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_program_name(char *cadena);

int		main(int argc, char *argv[])
{
	ft_print_program_name(argv[0]);
	return 0;
}

void	ft_print_program_name(char *cadena)   //recibe la posicion 0 de una cadena (un argumento) y mediante -->
{
	while (*cadena)								//-->un bucle la imprime caracter a caracter 
	{
		write(1, &*cadena, 1);
		cadena++;
	}
} 
