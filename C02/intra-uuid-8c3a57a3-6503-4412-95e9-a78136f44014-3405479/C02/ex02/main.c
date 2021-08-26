#include <stdio.h>

int		ft_str_is_alpha(char *pepe);

int		main(void)
{
	char	cadena[] = "elPepe";
	char	cadena2[] = "14lokitas";
	char	cadena3[] = "";
	int		i;

	i = ft_str_is_alpha(cadena);
	printf("%d \n" , i);
	i = ft_str_is_alpha(cadena2);
	printf("%d \n" , i);
	i = ft_str_is_alpha(cadena3);
	printf("%d \n" , i);

}
