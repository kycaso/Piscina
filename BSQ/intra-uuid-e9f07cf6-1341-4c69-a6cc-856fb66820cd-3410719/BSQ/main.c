/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:05:46 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 22:27:50 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun_bsq.h"

int		main(int argc, char **argv)
{
	int		n_map;
	char	*map_str;

	if (argc == 1)
		map_str = get_map(get_input());
	n_map = argc == 1 ? 0 : 1;
	while (n_map < argc)
	{
		if (argc != 1)
			map_str = get_map(argv[n_map]);
		if (map_str == NULL || errors(map_str) == 0)
			write(1, "map error\n", 10);
		else if (!(main_solver(map_str)))
			write(1, "no solution", 11);
		if (n_map != argc - 1)
			write(1, "\n", 1);
		n_map++;
		free(map_str);
	}
}

char	*get_input(void)
{
	char	c;
	int		fd;

	fd = open("mapinput", O_WRONLY | O_TRUNC | O_CREAT, 0644);
	while (read(0, &c, 1))
	{
		write(fd, &c, 1);
	}
	close(fd);
	return ("mapinput");
}

int		main_solver(char *file_str)
{
	int		*dimensions;
	char	charset[3];
	char	**map;
	int		*solution;

	dimensions = get_map_info(file_str, charset);
	map = create_map(file_str, dimensions);
	solution = ft_sqr_searcher(map, charset[1], dimensions);
	if (solution[2] != 0)
		ft_print_solution(solution, map, charset[2], dimensions);
	else
	{
		free(dimensions);
		free(map);
		free(solution);
		return (0);
	}
	free(dimensions);
	free(map);
	free(solution);
	return (1);
}
