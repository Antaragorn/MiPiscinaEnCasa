/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 16:32:53 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/17 16:32:53 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_uppercase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}