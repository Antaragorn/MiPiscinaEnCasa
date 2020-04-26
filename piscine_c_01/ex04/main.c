#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);
int main()
{
	int a = 10, b = 3;
	ft_ultimate_div_mod(&a,&b);
	printf("a = %d\nb = %d",a ,b);
return 0;
}