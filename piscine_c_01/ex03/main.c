#include <stdio.h>
void	ft_div_mod(int a, int b, int*, int*);
int main()
{
	int a = 10, b = 3, div, mod;
	ft_div_mod( a, b, &div, &mod);
	printf("div = %d\nmod = %d", div, mod);

return 0;
}