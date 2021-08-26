/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush004.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpiniell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:27:33 by cpiniell          #+#    #+#             */
/*   Updated: 2020/11/29 21:51:37 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int j;
	int i;

	j = x > 0 && y > 0 ? 1 : write(1, "Error: invalid input", 20);
	while (j <= y && x > 0)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && i == x))
				ft_putchar('A');
			else if ((j == 1 && i == x) || (i == 1 && j == y))
				ft_putchar('C');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
