/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 22:05:50 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 22:44:12 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun_bsq.h"

int		atoia(char *map)
{
	int final;
	int j;

	final = 0;
	j = 0;
	while (map[j] >= '0' && map[j] <= '9' && map[j + 3] != '\n')
	{
		final = final * 10;
		final = final + (int)(map[j] - '0');
		j++;
	}
	if (final > 2147483647)
		return (0);
	return (final);
}

int		check_only_input_chars(char *map)
{
	int		i;
	int		j;
	char	obst;
	char	empt;

	i = 0;
	j = 0;
	while (map[i + 1] != '\n')
		i++;
	obst = map[i - 1];
	empt = map[i - 2];
	i = i + 2;
	while (map[i] != '\0')
	{
		if (map[i] != obst && map[i] != empt && map[i] != '\n')
			return (0);
		if (map[i] == empt)
			j++;
		i++;
	}
	if (j == 0)
		return (0);
	return (1);
}

int		check_f_param(char *map)
{
	int i;
	int j;

	i = 0;
	while (map[i + 1] != '\n')
		i++;
	if (map[i] == map[i - 1] || map[i] == map[i - 2] ||
			map[i - 1] == map[i - 2])
		return (0);
	j = i;
	i = i - 3;
	while (j > i)
	{
		if (!(map[j] > 32 && map[j] < 127))
			return (0);
		j--;
	}
	while (i >= 0)
	{
		if (!(map[i] >= '0' && map[i] <= '9'))
			return (0);
		i--;
	}
	return (1);
}

int		errors(char *map)
{
	int row;
	int n_row;

	row = check_map(map);
	n_row = atoia(map);
	if ((row - 1) != n_row)
		return (0);
	if (check_f_param(map) == 0)
		return (0);
	else if (check_map(map) == 0)
		return (0);
	else if (check_only_input_chars(map) == 0)
		return (0);
	else
		return (1);
}
