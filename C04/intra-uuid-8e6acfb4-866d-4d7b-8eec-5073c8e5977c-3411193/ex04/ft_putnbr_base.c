/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:55:36 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/14 22:16:02 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		longi(char *b)
{
	int i;

	i = 0;
	while (b[i])
		i++;
	return (i);
}

int		errors(char *b, unsigned int l)
{
	int i;
	int j;

	i = 0;
	if (l <= 1)
		return (1);
	while (b[i] != '\0')
	{
		if (b[i] == '+' || b[i] == '-')
			return (1);
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[j] == b[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar_base(int n, char *b)
{
	char c;

	c = b[n];
	write(1, &c, 1);
}

void	ft_print_number(unsigned int n, char *b, unsigned int l)
{
	if (n < l && n >= 0)
	{
		ft_putchar_base(n, b);
	}
	else
	{
		ft_print_number(n / l, b, l);
		ft_print_number(n % l, b, l);
	}
}

void	ft_putnbr_base(int n, char *b)
{
	int				tf;
	unsigned int	l;
	unsigned int	o;

	l = longi(b);
	tf = errors(b, l);
	if (tf == 0)
	{
		if (n < 0)
		{
			o = -n;
			write(1, "-", 1);
		}
		else
			o = n;
		ft_print_number(o, b, l);
	}
}
