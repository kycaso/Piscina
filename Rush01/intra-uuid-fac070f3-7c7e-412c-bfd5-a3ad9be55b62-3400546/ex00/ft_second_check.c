/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:44:17 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/11 14:36:19 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rep(char **ext, int j, char c, int r)
{
	int l;
	int i;

	i = 0;
	l = 0;
	while (l <= 6)
	{
		if (ext[1][j + l] == c)
			i++;
		l = l + 2;
	}
	if (i > r)
		return (1);
	return (0);
}

int		look_rep(char **ext, int j)
{
	char	ck[4];
	char	c;
	int		i;

	i = 0;
	while (i <= 6)
	{
		c = ext[1][j + i];
		if (c == '1')
			ck[0] = rep(ext, j, c, 1);
		else if (c == '2')
			ck[1] = rep(ext, j, c, 3);
		else if (c == '3')
			ck[2] = rep(ext, j, c, 2);
		else
			ck[3] = rep(ext, j, c, 1);
		i = i + 2;
	}
	if (ck[0] == 1 || ck[1] == 1 || ck[2] == 1 || ck[3] == 1)
		return (1);
	return (0);
}

int		once_x_side(char **ext)
{
	int j;
	int l;
	int k;

	j = 0;
	while (j <= 24)
	{
		l = 0;
		k = 0;
		while (l < 8)
		{
			if (ext[1][j + l] == '1')
				k++;
			l = l + 2;
		}
		if (k == 0)
			return (1);
		j = j + 8;
	}
	return (0);
}

int		ft_second_check(char **ext)
{
	int		j;
	int		a;

	j = 0;
	while (j <= 24)
	{
		a = look_rep(ext, j);
		if (a == 1)
			return (1);
		j = j + 8;
	}
	a = once_x_side(ext);
	return (a);
}
