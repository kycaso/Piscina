#include <stdio.h>

int		ft_str_is_lowercase(char *pepe);

int		main(void)
{
	char	cadena[] = "elpepe";
	char	cadena2[] = "LokitAs";
	char	cadena3[] = "";
	char	cadena4[] = "PORQUEGRITAS";
	int		i;

	i = ft_str_is_lowercase(cadena);
	printf("%d \n" , i);
	i = ft_str_is_lowercase(cadena2);
	printf("%d \n" , i);
	i = ft_str_is_lowercase(cadena3);
	printf("%d \n" , i);
	i = ft_str_is_lowercase(cadena4);
	printf("%d \n" , i);
}
