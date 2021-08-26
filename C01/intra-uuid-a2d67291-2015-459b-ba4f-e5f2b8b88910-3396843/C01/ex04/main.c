#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int h;
	int j;
	int *c;
	int *r;

	h = 66666655;
	j = 10;
	c = &h;
	r = &j;
	ft_ultimate_div_mod(c, r);
	printf("%d %d", *c , *r);

}
