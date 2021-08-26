#include <stdio.h>

int		ft_strlen(char *str);

int 	main(void)
{
	char	str[20]="penepenepene";
	int		i;

	i = ft_strlen(str);
	printf("%d",i);
}
