#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char			dest[20] = "pimpampum";
	char 			src[3] = "pom";
	unsigned int 	size = 5;
	unsigned int	n;

	n = strlcat(dest, src, size);
	printf("%s \n", dest);
	printf("%s \n", src);
	printf("%d \n", n);
}
