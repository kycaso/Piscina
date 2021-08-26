/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:37:41 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/08 13:01:59 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_nonp(int a)
{
	char c;

	if (a / 10 == 0)
		c = '0' + a % 10;
	else
		c = 'a' + a % 10;
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				p;
	unsigned char	c;

	i = 0;
	while (str[i] != 0)
	{
		c = str[i];
		p = 0 + c;
		if (c > 31 && c < 127)
		{
			write(1, &c, 1);
		}
		else
		{
			c = '0' + 44;
			write(1, &c, 1);
			ft_put_nonp(p / 16);
			ft_put_nonp(p % 16);
		}
		i++;
	}
}
