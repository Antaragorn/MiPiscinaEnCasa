/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Antaragorn <Antaragorn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 01:46:59 by Antaragorn        #+#    #+#             */
/*   Updated: 2020/05/16 01:46:59 by Antaragorn       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//prototipos de funcion... creo que norminette no permite esto, habria que definir las funciones aqui.
void	imprimir_argumentos(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
void	imprimir_cadena(char *cadena);
char	**ordenar_cadena(int argc, char **argv);

int		main(int argc, char *argv[])
{
	char	**cadena_arg_ordenada;

	cadena_arg_ordenada = ordenar_cadena(argc, argv);
	imprimir_argumentos(argc, cadena_arg_ordenada);
	return 0;
}
/*Esta función imprime la cadena pasada por argumento*/
void	imprimir_cadena(char *cadena)
{
	while (*cadena)
	{
		write(1, &*cadena, 1);
		cadena++;
	}
	write(1,"\n",1);
} 
/*Esta funcion es del ejercicio que hicimos en el C03, simulando la función strcmp.*/
int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*Esta función va ha ordenar el arreglo de cadenas "argv" de los argumentos alfabéticamente 
y devolvera el arreglo ordenado. Compara cadena a cadena moviendo la cadena de mayor tamaño al final.*/
char	**ordenar_cadena(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		j = i +1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					aux = argv[j];
					argv[j] = argv[i];
					argv[i] = aux;
				}
			j++;
		}
		i++;
	}
	return argv;
}
/*imprime todas las cadenas del arreglo de punteros "argv"*/
void	imprimir_argumentos(int argc, char **argv)
{
	int		i;

	i = 1;
	while (argc > 1)
	{
		imprimir_cadena(argv[i]);
		i++;
	}
} 