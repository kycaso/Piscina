/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:56:51 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/01 17:05:48 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(int p);

void	ft_putnbr(int nb)
{
	int a;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		nb = (-1) * nb;
		write(1, "-", 1);
	}
	a = nb;
	ft_number(a);
}

void	ft_number(int p)
{
	int		i;
	int		r;
	int		d[10];
	char	c;

	i = 9;
	while (p > 0)
	{
		r = p % 10;
		p = p / 10;
		d[i] = r;
		i--;
	}
	i++;
	while (i < 10)
	{
		c = '0' + d[i];
		write(1, &c, 1);
		i++;
	}
}
