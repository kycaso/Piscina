/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:54:51 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/06 16:18:32 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	if (unb < 10 && unb >= 0)
	{
		c = unb + '0';
		write(1, &c, 1);
	}
	else if (unb >= 10)
	{
		ft_putnbr(unb / 10);
		c = unb % 10 + '0';
		write(1, &c, 1);
	}
}

int		get_view(int **table, int row, int view_row, int line_index)
{
	if (row == 2)
		return (table[view_row][line_index]);
	if (row == 3)
		return (table[view_row][3 - line_index]);
	if (row == 0)
		return (table[line_index][view_row]);
	if (row == 1)
		return (table[3 - line_index][view_row]);
	return (-1);
}
