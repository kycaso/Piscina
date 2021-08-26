/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_read_close.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 19:13:02 by epeters-          #+#    #+#             */
/*   Updated: 2020/12/13 22:21:21 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_rush_02.h"

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

char	*find_in_dict(char *number, char *dict)
{
	int		i;
	char	*match;
	char	*entry;

	match = ft_strstr(dict, number);
	match = ft_strstr(match, ":");
	match++;
	while (*match == ' ' || (*match >= 9 && *match <= 13))
		match++;
	i = 0;
	while (match[i] != '\n')
		i++;
	entry = malloc(sizeof(*entry) * (i + 1));
	i = 0;
	while (match[i] != '\n')
	{
		entry[i] = match[i];
		i++;
	}
	entry[i] = '\0';
	return (entry);
}

void	put_order(char *str, char *dict, int r)
{
	int		i;
	char	*entry;

	i = 1;
	str[0] = '1';
	while (i <= r)
	{
		str[i] = '0';
		i++;
	}
	write(1, " ", 1);
	entry = find_in_dict(str, dict);
	ft_putstr(entry);
}

void	put_hundred(char *dict)
{
	char	str[4];
	char	*entry;

	write(1, " ", 1);
	str[0] = '1';
	str[1] = '0';
	str[2] = '0';
	str[3] = '\0';
	entry = find_in_dict(str, dict);
	ft_putstr(entry);
}
