#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tabla[4];
	int n;
	int *pepe;

	n = 4;
	tabla[0] = 75;
	tabla[1] = 111;
	tabla[2] = 123;
	tabla[3] = 0;
	pepe = tabla;
	ft_rev_int_tab(pepe, n);
	printf("%d %d %d %d ",  tabla[0], tabla[1], tabla[2], tabla[3]);
}
