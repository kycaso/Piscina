
#include <stdio.h>

int 	ft_atoi_base(char *nbr, char *base);

int		main(void)
{
	char nbr[] = "  -+--+penekjjhv10";
	char base[] = "0pen";


	printf("%d \n",ft_atoi_base(nbr, base));
}
