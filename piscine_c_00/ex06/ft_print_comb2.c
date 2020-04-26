/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 21:11:58 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/12 21:11:58 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void imprimirNumeros(int num)
{
	int		num1;
	int		num2;

	num1 = num / 10 + 48;
	num2 = num % 10 + 48;
	write(1, &num1, 1);
	write(1, &num2, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <99)
	{
		j = i + 1;
		while (j <=99)
		{
			imprimirNumeros(i);
			write(1, " ", 1);
			imprimirNumeros(j);
			if (!(i == 98 && j == 99))		
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

