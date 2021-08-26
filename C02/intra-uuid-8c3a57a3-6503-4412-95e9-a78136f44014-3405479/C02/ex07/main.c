#include <stdio.h>

char	*ft_strupcase(char *pepe);

int		main(void)
{
	char	cadena[] = "elpepe";
	char	cadena2[] = "NULL";
	char	cadena3[] = "";
	char	cadena4[] = "SoY ChOnII <3";
	char	*punt;

	punt = ft_strupcase(cadena);
	printf("%s \n" , punt);
	punt = ft_strupcase(cadena2);
	printf("%s \n" , punt);
	punt = ft_strupcase(cadena3);
	printf("%s \n" , punt);
	punt = ft_strupcase(cadena4);
	printf("%s \n" , punt);
}
