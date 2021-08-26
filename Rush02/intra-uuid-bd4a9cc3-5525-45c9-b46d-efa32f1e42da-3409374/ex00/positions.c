/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:20:56 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/13 21:50:54 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	put_order(char *d, int r)
{
	int		i;
	char	str[10];

	i = 1;
	str[0] = '1';
	while (i < 10)
	{
		if (i <= r)
			str[i] = '0';
		else
			str[i] = '\0';
		i++;
	}
	write(1, " ", 1);
	put_string(str, d);
}

void	put_hundred(char *d)
{
	char	*str;

	write(1, " ", 1);
	str = "100";
	put_string(str, d);
}

void	p_0(char *n, char *d, int r, int t)
{
	char	str[2];

	if (n[t - r - 1] != '0')
	{
		str[0] = n[t - r - 1];
		str[1] = '\0';
		put_string(str, d);
		if (r != 0)
		{
			put_order(d, r);
		}
	}
}

int		p_1(char *n, char *d, int r, int t)
{
	char	str[3];

	str[2] = '\0';
	if (n[t - r - 1] == '1')
	{
		str[0] = '1';
		str[1] = n[t - r];
		put_string(str, d);
		if (r != 1)
			put_order(d, r - 1);
		r--;
	}
	else if (n[t - r - 1] > '1')
	{
		str[0] = n[t - r - 1];
		str[1] = '0';
		put_string(str, d);
		if (n[t - r] == '0' && r != 1)
		{
			put_order(d, r - 1);
			r--;
		}
	}
	return (r);
}

int		p_2(char *n, char *d, int r, int t)
{
	char	str[10];

	if (n[t - r - 1] != '0')
	{
		str[0] = n[t - r - 1];
		put_string(str, d);
		put_hundred(d);
		if (n[t - r] == '0' && n[t - r + 1] == '0' && r != 2)
		{
			put_order(d, r - 2);
			r = r - 2;
		}
	}
	return (r);
}
