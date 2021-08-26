/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:55:34 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/11/30 08:56:56 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pintapinta(char w, char x, char y, char z)
{
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (w != '9' || x != '8' || y != '9' || z != '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	llamada(char a, char b)
{
	char l;
	char m;

	if (b == '9')
	{
		l = a + 1;
		m = '0';
	}
	else
	{
		l = a;
		m = b + 1;
	}
	while (l <= '9')
	{
		while (m <= '9')
		{
			pintapinta(a, b, l, m);
			m++;
		}
		m = '0';
		l++;
	}
}

void	ft_print_comb2(void)
{
	int j;
	int k;

	j = '0';
	while (j <= '9')
	{
		k = '0';
		while (k <= '9' || (k < '9' && j != '9'))
		{
			llamada(j, k);
			k++;
		}
		j++;
	}
}
