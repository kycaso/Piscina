void	ft_putstr_non_printable(char *str);

int main(void)
{
	char loko[] = "Coucou\ftu vas bien ?";
	ft_putstr_non_printable(loko);
	return (0);
}
