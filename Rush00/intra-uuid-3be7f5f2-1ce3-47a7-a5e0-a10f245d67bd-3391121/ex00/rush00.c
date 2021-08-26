/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpiniell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:54:57 by cpiniell          #+#    #+#             */
/*   Updated: 2020/12/05 16:40:15 by fbelda-h         ###   ########.fr       */
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
			if ((j == 1 || j == y) && (i == 1 || i == x))
				ft_putchar('o');
			else if ((j != 1 || j != y) && (i == 1 || i == x))
				ft_putchar('|');
			else if ((j == 1 || j == y) && (i != 1 || i != x))
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
