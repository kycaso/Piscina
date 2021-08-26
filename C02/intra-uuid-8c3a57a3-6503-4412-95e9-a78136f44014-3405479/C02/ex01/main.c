#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char 			dest[] = "popipopipopopipo";
	char 			src[] = ""; 
	char			*popo;
	unsigned int 	n;

	n = 15;
	popo = strncpy(dest, src, n);
   	printf("%s", dest);
	unsigned int i = 0;
	while( i < n)
	{
		if (dest[i] == '\0')
			printf("0");
	   	i++;
	}

	popo = ft_strncpy(dest, src, n);
	printf("\n%s", dest);
	i = 0;
	while( i < n)
	{
		if (dest[i] == '\0')
			printf("0");
	   	i++;
	}
	return (0);
}
