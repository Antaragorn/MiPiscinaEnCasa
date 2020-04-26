#include <stdio.h>

void	ft_sort_int_tab(int*, int);
int main()
{	
	int str[] ={11,29,33,24,95,16,7,48,19,20};
	int size = 10;
	ft_sort_int_tab(str, size);	
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ",str[i]);
	}
return 0;
}
