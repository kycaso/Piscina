/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:57:06 by epeters-          #+#    #+#             */
/*   Updated: 2020/12/13 22:17:26 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_rush_02.h"

void	number_case(char *number, char *dict)
{
	int sz;
	int r;

	sz = ft_strlen(number);
	r = sz;
	while (--r >= 0)
	{
		if (r % 3 == 0)
			r = pos_0(number, dict, r, sz);
		else if (r % 3 == 1)
		{
			if (number[sz - r - 1] == '1')
				r = pos_1(number, dict, r, sz);
			else if (number[sz - r - 1] > '1')
				r = pos_10(number, dict, r, sz);
		}
		else
			r = pos_2(number, dict, r, sz);
		if (r == -1)
			write(1, "Dict Error\n", 11);
		if (r != 0 && number[sz - r - 1] != '0')
			write(1, " ", 1);
		else if (r == 0)
			write(1, "\n", 1);
	}
}

int		pos_0(char *number, char *dict, int r, int sz)
{
	char str[2];
	char *entry;

	str[0] = number[sz - r - 1];
	str[1] = '\0';
	if (((entry = find_in_dict(str, dict)) == NULL))
		return (-1);
	ft_putstr(entry);
	if (r != 0)
		put_order(str, dict, r);
	return (r);
}

int		pos_1(char *number, char *dict, int r, int sz)
{
	char str[3];
	char *entry;

	str[0] = '1';
	str[1] = number[sz - r];
	str[2] = '\0';
	if (((entry = find_in_dict(str, dict)) == NULL))
		return (-1);
	ft_putstr(entry);
	if (r != 1)
		put_order(str, dict, r - 1);
	r--;
	return (r);
}

int		pos_10(char *number, char *dict, int r, int sz)
{
	char str[3];
	char *entry;

	str[0] = number[sz - r - 1];
	str[1] = '0';
	str[2] = '\0';
	if (((entry = find_in_dict(str, dict)) == NULL))
		return (-1);
	ft_putstr(entry);
	if (number[sz - r] == '0' && r != 1)
	{
		put_order(str, dict, r - 1);
		r--;
	}
	return (r);
}

int		pos_2(char *number, char *dict, int r, int sz)
{
	char str[2];
	char *entry;

	if (number[sz - r - 1] != '0')
	{
		str[0] = number[sz - r - 1];
		str[1] = '\0';
		if (((entry = find_in_dict(str, dict)) == NULL))
			return (-1);
		ft_putstr(entry);
		put_hundred(dict);
		if (number[sz - r] == '0' && number[sz - r - 1] == '0' && r != 2)
		{
			put_order(str, dict, r - 2);
			r = r - 2;
		}
	}
	return (r);
}
