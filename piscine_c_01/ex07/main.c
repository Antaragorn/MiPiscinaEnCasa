#include <stdio.h>

void	ft_rev_int_tab(int*, int);
int main()
{	
	int str[] ={1,2,3,4,5,6,7,8,9,0} ;
	int size = 10;
	ft_rev_int_tab(str, size);	
	for (int i = 0; i < size; i++)
	{
		printf("%d",str[i]);
	}
return 0;
}
