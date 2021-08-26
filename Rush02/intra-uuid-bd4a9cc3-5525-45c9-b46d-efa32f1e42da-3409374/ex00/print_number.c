/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:13:47 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 13:08:46 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len_src;

	i = 0;
	len_src = ft_strlen(src);
	if ((dup = malloc((sizeof(*dup) * (len_src + 1)))))
	{
		while (src[i] != 0)
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	else
		return (0);
	return (dup);
}

void	print_space(char *n, int r, int t)
{
	int j;
	int i;

	i = r;
	j = 0;
	if (r != 0)
		while (i < t)
		{
			if (n[i] == '0')
				j++;
			i++;
		}
	if (j != r)
		write(1, " ", 1);
}

void	print_number(char *n, char *d)
{
	int t;
	int r;

	t = 0;
	while (n[t])
		t++;
	r = t - 1;
	while (r >= 0)
	{
		if (r % 3 == 0)
			p_0(n, d, r, t);
		else if (r % 3 == 1)
			r = p_1(n, d, r, t);
		else
			r = p_2(n, d, r, t);
		print_space(n, r, t);
		r--;
	}
}

char	*get_dict(int argc, char **argv)
{
	char	*path;
	int		fd;
	char	c;
	int		file_size;
	char	*filestr;

	if (argc == 3)
		path = ft_strdup(argv[1]);
	else
	{
		path = malloc(sizeof(*path) * 13);
		path = "numbers.dict";
	}
	if ((fd = open(path, O_RDONLY)) == -1)
		return (NULL);
	file_size = 0;
	while (read(fd, &c, 1))
		file_size++;
	close(fd);
	filestr = malloc(sizeof(*filestr) * (file_size + 1));
	fd = open(path, O_RDONLY);
	read(fd, filestr, file_size);
	filestr[file_size] = '\0';
	close(fd);
	return (filestr);
}
