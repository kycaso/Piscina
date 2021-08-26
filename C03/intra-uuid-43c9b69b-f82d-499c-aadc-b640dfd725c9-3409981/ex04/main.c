#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
int	main(void)
{
	char str[] = "trttrjllsisrjrjor";
	char *to_find = "jr";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str,to_find));
}
