/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:13:51 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/01/23 12:42:10 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	print_number(char *n, char *d);
void	put_string(char *str, char *d);
void	p_0(char *n, char *d, int r, int t);
int		p_1(char *n, char *d, int r, int t);
int		p_2(char *n, char *d, int r, int t);
char	*get_dict(int argc, char **argv);
char	*ft_atoa(char *str);
int		check_number(char *str);
int		count_digits(char *str);
int		check_error(int argc, char **argv);

#endif
