#include <stdio.h>

int		ft_iterative_power(int n, int power);

int		main(void)
{
	int i;
	int p;

	i = 2;
	p = 5;
	printf("%d elevado a %d es %d",i, p, ft_iterative_power(i,p));
}
