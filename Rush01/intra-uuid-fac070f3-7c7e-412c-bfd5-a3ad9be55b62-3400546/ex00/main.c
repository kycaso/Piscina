/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:54:02 by ssanz-al          #+#    #+#             */
/*   Updated: 2020/12/06 17:26:21 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int solution(int **table, int **views, int *slv);
int **complete_views(char *arg);
int **loc_memory(int size);
int	ft_first_check(int n, char **argv);

int	main(int argc, char **argv)
{
	int **views;
	int **table;
	int solved;
	int check;

	check = ft_first_check(argc, argv);
	if (check == 1)
		write(1, "Error\n", 6);
	else
	{
		views = complete_views(argv[1]);
		table = loc_memory(4);
		solved = 0;
		solution(table, views, &solved);
		if (!solved)
			write(1, "Error\n", 6);
	}
	return (0);
}
