/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 19:44:50 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/03 15:43:42 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_number(int p)
{
	int		d[10];
	int		i;
	int		r;
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

void	ft_print_number(int nb)
{
	int a;

	a = nb;
	ft_number(a);
}

void	ft_final_print(int a, int c, int f)
{
	if (c == 1)
		write(1, "0", 1);
	ft_print_number(a);
	if (a != f)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_check_number(int s, int p, int n, int f)
{
	int cero;
	int j;
	int a;

	a = s;
	cero = 0;
	if (s / p == 0)
	{
		cero = 1;
		p = p / 10;
	}
	j = cero;
	while (s / p < (s - s / p * p) * 10 / p)
	{
		s = s - s / p * p;
		p = p / 10;
		j++;
	}
	if (j == n - 1)
		ft_final_print(a, cero, f);
}

void	ft_print_combn(int n)
{
	int f;
	int p;
	int l;
	int i;

	if (n < 10 && n > 0)
	{
		f = 9;
		l = 1;
		p = 1;
		i = n > 1 ? n - 1 : write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
		while (l < n)
		{
			p = p * 10;
			f = f + (9 - l) * p;
			i = i + (i * 10 / p - 1) * p;
			l++;
		}
		while (i <= f && n != 1)
		{
			ft_check_number(i, p, n, f);
			i = i + 1;
		}
	}
}
