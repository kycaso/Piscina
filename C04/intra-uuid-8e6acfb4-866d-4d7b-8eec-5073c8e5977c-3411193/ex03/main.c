#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	int i;
	char str[] = " -+-2147sc483644";
	i = ft_atoi(str);
	printf("%d \n", i);
}
