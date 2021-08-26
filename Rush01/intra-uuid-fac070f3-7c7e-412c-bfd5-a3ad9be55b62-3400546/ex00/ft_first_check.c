/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:25:59 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/06 17:24:07 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		err_x_n_arg(int n, char **ext)
{
	int j;

	if (n != 2)
		return (1);
	j = 0;
	while (ext[1][j] != '\0')
		j++;
	if (j != 31)
		return (1);
	return (0);
}

int		err_x_ext_inva(char **ext)
{
	int i;

	i = 0;
	while (i < 30)
	{
		if (ext[1][i] < '1' || ext[1][i] > '4' || ext[1][i + 1] != ' ')
			return (1);
		i = i + 2;
	}
	if (ext[1][30] < '1' || ext[1][30] > '4')
		return (1);
	return (0);
}

int		err_x_ext_incomp_add(char **ext)
{
	int j;

	j = 0;
	while (j < 31)
	{
		if (j < 7 || (j > 15 && j < 24))
		{
			if ((ext[1][j] + ext[1][j + 8] - 48) > '5')
				return (1);
			else if ((ext[1][j] + ext[1][j + 8] - 48) < '3')
				return (1);
		}
		j = j + 2;
	}
	return (0);
}

int		ft_second_check(char **ext);

int		ft_first_check(int n, char **ext)
{
	int a;

	a = err_x_n_arg(n, ext);
	if (a == 0)
	{
		a = err_x_ext_inva(ext);
		if (a == 0)
		{
			a = err_x_ext_incomp_add(ext);
			if (a == 0)
				a = ft_second_check(ext);
		}
	}
	return (a);
}
