/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqr_searcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 20:00:59 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 22:46:55 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun_bsq.h"

/*
** This function check if there is no obstacle in the square of the map
** given by the array coor, if there isnt it reutrns 1 to solution that returns
** 1 to ft_check_square aswell. That will mean that the solution has been found
*/

int		check_disponibility(char **map, int *coor, char o)
{
	int f;
	int c;

	f = coor[0];
	while (f <= coor[0] + coor[2] - 1)
	{
		c = coor[1];
		while (c <= coor[1] + coor[2] - 1)
		{
			if (map[f][c] == o)
				return (0);
			c++;
		}
		f++;
	}
	return (1);
}

/*
** This function scroll the map looking for a solution and saving it in an int
** array (coor), if there isnt it returns 0 to ft_sqr_check
*/

int		solution(char **map, int *coor, char o, int *dim)
{
	while (coor[0] + coor[2] - 1 < dim[0])
	{
		coor[1] = 0;
		while (coor[1] + coor[2] - 1 < dim[1])
		{
			if (check_disponibility(map, coor, o) == 1)
				return (1);
			coor[1]++;
		}
		coor[0]++;
	}
	return (0);
}

/*
** this is the main function. It takes the inicial side of the square as
** the smallest side of the rectangle and reduce it iteratively while
** there is no solution (s = 0) given by the function solution
*/

int		*ft_sqr_searcher(char **map, char o, int *dim)
{
	int *coor;
	int s;

	coor = malloc(sizeof(*coor) * 3);
	if (dim[0] < dim[1])
		coor[2] = dim[0];
	else
		coor[2] = dim[1];
	while (coor[2] > 0)
	{
		coor[0] = 0;
		coor[1] = 0;
		s = solution(map, coor, o, dim);
		if (s == 1)
			break ;
		coor[2]--;
	}
	return (coor);
}
