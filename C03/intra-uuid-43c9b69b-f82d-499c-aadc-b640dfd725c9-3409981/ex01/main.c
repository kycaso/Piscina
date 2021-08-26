#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[]="";
	char s2[]= "0";
	unsigned int i;
	unsigned int paco;
	unsigned int n = 3;
	i = 0;
	paco = strncmp(s1, s2, n);
	printf("%d \n", paco);
	paco = strncmp(s1, s2, n);
	printf("%d", paco);
}
