#include <stdio.h>

char	*ft_strlowcase(char *pepe);

int		main(void)
{
	char	cadena[] = "me llamo Nobita O,o Me gUsTa SisukaH25";
	char	*punt;

	punt = ft_strlowcase(cadena);
	printf("%s \n" , punt);
}
