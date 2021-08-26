/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:38:47 by tlufulua          #+#    #+#             */
/*   Updated: 2020/12/07 11:23:21 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	j;
	int	i;

	j = x > 0 && y > 0 ? 1 : write(1, "Error: invalid input", 20);
	while (j <= y && x > 0)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (i == x && j == y))
				ft_putchar('/');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar(92);
			else if (((j == 1 || j == y)) || ((i == 1 || i == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
