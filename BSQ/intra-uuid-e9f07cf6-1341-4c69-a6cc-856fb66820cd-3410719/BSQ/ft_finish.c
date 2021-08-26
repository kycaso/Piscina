/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:33:57 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 22:45:40 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun_bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_solution(int *sol, char **map, char full, int *dim)
{
	int x;
	int y;

	y = 0;
	while (y < dim[0])
	{
		x = 0;
		while (x < dim[1])
		{
			if ((x >= sol[1]) && (y >= sol[0]) && (x <= sol[1] + sol[2] - 1)
					&& (y <= sol[0] + sol[2] - 1))
				ft_putchar(full);
			else
				ft_putchar(map[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
