#include <stdio.h>

int		ft_str_is_uppercase(char *pepe);

int		main(void)
{
	char	cadena[] = "elpepe";
	char	cadena2[] = "LokitAs";
	char	cadena3[] = "";
	char	cadena4[] = "PORQUEGRITAS";
	int		i;

	i = ft_str_is_uppercase(cadena);
	printf("%d \n" , i);
	i = ft_str_is_uppercase(cadena2);
	printf("%d \n" , i);
	i = ft_str_is_uppercase(cadena3);
	printf("%d \n" , i);
	i = ft_str_is_uppercase(cadena4);
	printf("%d \n" , i);
}
