#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	dest[] = "aguacate";
	char	*src;
	char	*puta;

	src = "trfjk";
	printf("%s \n", src);
    puta = ft_strcpy(dest, src);
	printf("%s \n", dest);

    return (0);

}

