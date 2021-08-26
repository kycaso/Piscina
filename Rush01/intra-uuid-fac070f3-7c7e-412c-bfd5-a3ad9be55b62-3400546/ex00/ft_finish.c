/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:54:37 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/06 16:39:54 by ssanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_zero(int **table, int *row, int *col);
int		not_repeat(int **table, int bfloor, int row, int col);
void	print_table(int **table);
void	free_table(int **table);
int		check_row(int **table, int view, int view_row, int build_view);
int		get_view(int **table, int view, int view_row, int line_index);
int		**copy_table(int **table);
int		check_views(int **table, int **views);

int		solution(int **table, int **views, int *solved)
{
	int row;
	int col;
	int i;
	int **copy;

	if (!is_zero(table, &row, &col))
		return (1);
	i = 0;
	while (++i <= 4)
	{
		if (!not_repeat(table, row, col, i))
			continue;
		copy = copy_table(table);
		copy[row][col] = i;
		if (solution(copy, views, solved) && check_views(copy, views))
		{
			*solved = 1;
			print_table(copy);
			free_table(copy);
			return (1);
		}
		free_table(copy);
	}
	return (0);
}

int		is_zero(int **table, int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (table[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int		not_repeat(int **table, int row, int col, int skyscraper)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (table[row][i++] == skyscraper)
			return (0);
	}
	i = 0;
	while (i < 4)
	{
		if (table[i++][col] == skyscraper)
			return (0);
	}
	return (1);
}

int		check_views(int **table, int **views)
{
	int row;
	int col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (!check_row(table, row, col, views[row][col]))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int		check_row(int **table, int row, int col, int n_views)
{
	int i;
	int temp_num;

	i = 0;
	while (i < 4)
	{
		temp_num = get_view(table, row, col, i);
		if (temp_num == 0)
			return (0);
		n_views--;
		while (i + 1 < 4 && temp_num > get_view(table, row, col, i + 1))
			i++;
		i++;
	}
	return (n_views == 0);
}
