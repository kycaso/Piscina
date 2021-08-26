#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[20] = "pizza";
	char src[7] = "papuchi";
	char dest2[20] = "pizza";

	strcat(dest, src);
	printf("%s \n", dest);
	printf("%s \n", src);	
	ft_strcat(dest2, src);
	printf("%s \n", dest2);
	return (0);
}
