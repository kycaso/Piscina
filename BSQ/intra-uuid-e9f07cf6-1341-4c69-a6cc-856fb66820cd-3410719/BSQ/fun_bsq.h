/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_bsq.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:00:17 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/01/23 12:36:10 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FUN_BSQ_H
# define FUN_BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_input(void);
int		main_solver(char *file_str);
char	*get_map(char *path);
int		*get_map_info(char *file_str, char *charset);
char	**create_map(char *file_str, int *dimensions);
int		ft_atoi(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		*ft_sqr_searcher(char **map, char o, int *dim);
int		solution(char **map, int *coor, char o, int *dim);
int		check_disponibility(char **map, int *coor, char o);
void	ft_putchar(char c);
void	ft_print_solution(int *sol, char **map, char full, int *dim);
int     errors(char *map);
int     check_map(char *map);

#endif
