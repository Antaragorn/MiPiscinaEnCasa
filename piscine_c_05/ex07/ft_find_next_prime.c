/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 14:08:31 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/15 14:08:31 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i)       //comprueba el modulo buscando el 0, al salir del bucle si nb, que ha sido dividido ->
		i++;			//->por i, con resto 0, es igual a i significa que nb solo se puede dividir por si mismo.
	if (nb == i)
		return 1;
	else
		return 0;
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))			//comprueba si es primo, si lo es, devuelve el numero.
		return nb;
	else							//si no, va comprobando nb sumandole 1 en cada ciclo hasta que encuentra el siguente nº primo.
	{
		while (!ft_is_prime(nb))    // el operador '!' cambia el resultado ya que la funcion ft_is_prime devuenve 0 si no es primo.-->
			nb++;					// -->al encontrar el primo, ft_is_prime devuelve 1 que es cambiado a 0 por '!' saliendo del bucle.
		return nb;
	}
}