#include <stdio.h>
#include <string.h>

unsigned int  ft_strlcpy(char *dest, char  *src, unsigned int size);

int		main(void)
{
	char pepe[] = "allialligatoah"; 
	char papu[] = "lolilolo";
	unsigned int a;

	a = ft_strlcpy(pepe, papu, 6);
	printf("%s \n", pepe);
	printf("%d ", a);
}
