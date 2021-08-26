#include <string.h>
#include <stdio.h>
int		ft_strcmp(char *si, char *s2);

int		main(void)
{
	char s1[] = "abooo";
	char s2[] = "aboofgg";
	int  i;

	i = strcmp(s1, s2);
	printf("%d \n", i);
	i = ft_strcmp(s1, s2);
	printf("%d", i);
}

