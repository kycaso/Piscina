/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:24:10 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/05 16:40:28 by fbelda-h         ###   ########.fr       */
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
			if ((i == 1 || i == x) && j == 1)
				ft_putchar('A');
			else if ((i == 1 || i == x) && j == y)
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
