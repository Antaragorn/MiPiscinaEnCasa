/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 16:33:12 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/17 16:33:12 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_numeric(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}