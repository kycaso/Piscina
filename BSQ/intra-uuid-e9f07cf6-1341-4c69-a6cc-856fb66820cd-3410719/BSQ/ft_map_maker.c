/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_maker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:34:33 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/16 22:46:05 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun_bsq.h"

char	*get_map(char *path)
{
	int		fd;
	char	c;
	int		file_size;
	char	*filestr;

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

int		*get_map_info(char *file_str, char *charset)
{
	int		*dimensions;
	int		i;
	char	*rows;

	i = 0;
	while (file_str[i] != '\n')
		i++;
	rows = malloc(sizeof(*rows) * (i - 2));
	ft_strncpy(rows, file_str, i - 3);
	dimensions = malloc(sizeof(*dimensions) * 2);
	dimensions[0] = ft_atoi(rows);
	file_str = file_str + i - 3;
	i = 0;
	while (i < 3)
	{
		charset[i] = *file_str;
		file_str++;
		i++;
	}
	i = 1;
	while (file_str[i] != '\n')
		i++;
	dimensions[1] = i - 1;
	return (dimensions);
}

char	**create_map(char *file_str, int *dimensions)
{
	char	**map;
	int		i;

	map = malloc(sizeof(*map) * dimensions[0]);
	while (*file_str != '\n')
		file_str++;
	file_str++;
	i = 0;
	while (i < dimensions[0])
	{
		map[i] = malloc(sizeof(**map) * (dimensions[1] + 1));
		ft_strncpy(map[i], file_str, dimensions[1]);
		file_str = file_str + dimensions[1] + 1;
		i++;
	}
	return (map);
}

int		ft_atoi(char *str)
{
	int number;
	int sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + (int)(*str - '0');
		str++;
	}
	number = number * sign;
	return (number);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
