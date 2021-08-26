/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 22:06:36 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 22:44:22 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_map_logic(int row, int i, int *col, int *col1)
{
	if (row == 1)
	{
		*col1 = i - *col;
		*col = i;
	}
	else if (row > 1)
	{
		if ((i - *col) == *col1)
			*col = i;
		else
			return (0);
	}
	else
		*col = i;
	return (1);
}

int		check_map(char *map)
{
	int row;
	int i;
	int col;
	int col1;

	row = 0;
	i = 0;
	col = 0;
	while (map[i] != '\0')
	{
		while (map[i] != '\n' && map[i] != '\0')
			i++;
		if (check_map_logic(row, i, &col, &col1) == 0)
			return (0);
		row++;
		i++;
	}
	return (row);
}
