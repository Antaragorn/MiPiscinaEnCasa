int		ft_recursive_power(int nb, int power)
{
	int		res;

	if (power == 0)
 		res=1;
	else if (power > 0)
 	{
		res=nb * ft_recursive_power(nb, power - 1);
 	}
	else if (power < 0)										//para que esta parte del codigo muestre el resultado correcto, habria que utilizar float
 	{														//como tipo devuelto para la funcion.
		res= 1 / nb * ft_recursive_power(nb, power + 1);
	}
	return res; 
}