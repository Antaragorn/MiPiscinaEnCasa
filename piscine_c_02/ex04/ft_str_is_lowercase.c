/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 16:32:59 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/17 16:32:59 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_lowercase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}