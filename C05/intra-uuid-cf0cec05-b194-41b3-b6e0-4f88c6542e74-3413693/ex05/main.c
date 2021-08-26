#include <stdio.h>

int		ft_sqrt(int n);

int		main(void)
{
	int i;
	i = -50;
	while (i <= 50)
	{
		printf("la raiz de %d es %d  \n", i, ft_sqrt(i));
		i++;
	}
}
