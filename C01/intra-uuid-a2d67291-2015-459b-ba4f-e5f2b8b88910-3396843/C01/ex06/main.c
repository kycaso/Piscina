#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *cadena;
	int c;

	cadena = "me pica la nariz y eso significa movida";
	c = ft_strlen(cadena);
	printf("%d" , c);
}
