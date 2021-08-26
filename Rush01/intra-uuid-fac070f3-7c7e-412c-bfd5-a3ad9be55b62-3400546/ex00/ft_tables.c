/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrices.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:54:19 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/06 16:41:52 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**complete_views(char *arg);
int		**loc_memory(int size);
int		**copy_table(int **table);
void	free_table(int **table);
void	print_table(int **table);
int		ft_putchar(char c);
void	ft_putnbr(int nb);

int		**complete_views(char *argv)
{
	int i;
	int j;
	int **views;

	j = 0;
	i = 0;
	views = loc_memory(4);
	while (i < 16)
	{
		if (argv[i] == ' ')
		{
			argv++;
			continue;
		}
		views[j][i % 4] = argv[i] - '0';
		if (i % 4 == 3)
			j++;
		i++;
	}
	return (views);
}

int		**loc_memory(int size)
{
	int i;
	int j;
	int **table;

	table = malloc(sizeof(int *) * size);
	i = 0;
	while (i < size)
	{
		table[i] = malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
			table[i][j++] = 0;
		i++;
	}
	return (table);
}

int		**copy_table(int **table)
{
	int **copy;
	int i;
	int j;

	copy = loc_memory(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			copy[i][j] = table[i][j];
			j++;
		}
		i++;
	}
	return (copy);
}

void	free_table(int **table)
{
	int i;

	i = 0;
	while (i < 4)
		free(table[i++]);
	free(table);
}

void	print_table(int **table)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(table[i][j]);
			j++;
			if (j != 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
