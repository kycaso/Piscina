#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int f;
	int g;

	f = 40;
	g = 42;
	ft_swap(&f, &g);
	printf("%d, %d ", f, g);
	return (0);
}
