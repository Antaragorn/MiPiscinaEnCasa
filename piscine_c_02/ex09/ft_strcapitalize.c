/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 20:07:57 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/17 20:07:57 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] < 'Z')
			str[i] += 32;
		i++;
	}
	return str;
}
int		comprobarCaracter(char cara)
{
		if ((cara < 'A' || cara > 'Z') && (cara < 'a' || cara > 'z') && \
			(cara < '0' || cara > '9'))
			return (1);
		
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && comprobarCaracter(str[i - 1]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;	
}
