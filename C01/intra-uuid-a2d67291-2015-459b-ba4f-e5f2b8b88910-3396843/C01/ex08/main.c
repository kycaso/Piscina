#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int pepe[5];
	int n;
	int *ptr;

	n = 5;
	pepe[0] = 9;
	pepe[1] = 4;
	pepe[2] = 12;
	pepe[3] = 4; 
	pepe[4] = 6665;
	ptr = pepe;
	ft_sort_int_tab(ptr, n);
	printf("%d %d %d %d %d ", pepe[0], pepe[1], pepe[2], pepe[3], pepe[4]);
	return (0);
}
