#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[20] = "pizza";
	char src[] = "aguacate";
	char dest2[20] = "pizza";
	unsigned int n = 3;

	strncat(dest, src, n);
	printf("%s \n", dest);	
	ft_strncat(dest2, src, n);
	printf("%s \n", dest2);
	return (0);
}
