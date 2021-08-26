/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:24:22 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/13 21:53:24 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_string(char *str, char *d)
{
	int i;
	int j;
	int l;

	i = 0;
	l = 0;
	while (str[l] != '\0')
		l++;
	while (d[i] != '\0')
	{
		j = 0;
		while ((d[i + j] != '\0') && (d[i + j] == str[j]))
			j++;
		if (j == l && (d[i + j + 1] == ' ' || d[i + j + 1] == ':'))
			break ;
		i++;
	}
	while (d[i + j + 1] == ' ')
		i++;
	while (d[i + j + 1] != '\n' && d[i + j + 1])
	{
		ft_putchar(d[i + j + 1]);
		i++;
	}
}
