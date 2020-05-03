/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 00:48:55 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/04/21 00:48:55 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		longitud_src;
	
	longitud_src = 0;			//variable para la longitud de src
	j = 0;						//variable iterador de la cadena src
	i = 0;						//variable iterador de la cadena dest. Tambien se usa para la longitud de la cadena destino.



	
	while (dest[i])				//se calcula la longitud de la cadena de destino.
		i++;
	while (src[longitud_src])	//Se calcula la longutud de la cadena a copiar.
		longitud_src++;
	while (src[j] && j + i < size - 1) //se copia desde el final de la cadena dest hasta el final de la cadena a copiar, o hasta el tamaño de dest. 
	{
		dest[i + j] = src[j];			//tener en cuenta que una cadena de tamaño de 120 posiciones de memoria puede contener simplemente la palabra "hola".
		j++;
	}
	dest[i + j] = '\0';					//se coloca el nulo al finalizar el bucle 
	if (size < i)						//si la cadena destino es 0 retorna el tamaño necesario para copiar la cadena
		return longitud_src + size;
	return i + longitud_src;			//retorna la longitud de la cadena que queremos crear.
}