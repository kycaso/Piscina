#include <stdio.h>

int		ft_str_is_printable(char *pepe);

int		main(void)
{
	char	cadena[] = "elpepe";
	char	cadena2[] = "\n";
	char	cadena3[] = "";
	char	cadena4[] = "PORQUEGRITAS";
	int		i;

	i = ft_str_is_printable(cadena);
	printf("%d \n" , i);
	i = ft_str_is_printable(cadena2);
	printf("%d \n" , i);
	i = ft_str_is_printable(cadena3);
	printf("%d \n" , i);
	i = ft_str_is_printable(cadena4);
	printf("%d \n" , i);
}
