/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 20:00:16 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/12 20:00:16 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char	centenas;
	char	decenas;
	char	unidades;
	
	centenas = '0';
	while (centenas <= '9')
	{
		decenas = centenas + 1;
		while (decenas <= '9')
		{
			unidades = decenas + 1;
			while (unidades <= '9')
			{		
				imprimirNumeros(centenas, decenas, unidades);				
				unidades++;
			}			
			decenas++;
		}		
		centenas++;
	}	
}

void imprimirNumeros(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (!(c == '7' && d == '8' && u == '9'))
		write(1, ", ", 2);
}
