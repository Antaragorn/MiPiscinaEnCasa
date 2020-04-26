#include <stdio.h>
void	ft_swap(int *a, int *b);

int main()
{
	int a = 8;
	int b = 3;

	printf("Antes del cambio: \n");
	printf("El valor de a = %d \nEl valor de b = %d\n",a,b);
	ft_swap(&a,&b);
	printf("Despues del cambio: \n");
	printf("El valor de a = %d \nEl valor de b = %d",a,b);
return 0;
}

