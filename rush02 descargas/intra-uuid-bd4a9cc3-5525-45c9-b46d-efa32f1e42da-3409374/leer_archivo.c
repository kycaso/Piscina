/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leer_archivo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:08:40 by mtorrado          #+#    #+#             */
/*   Updated: 2020/12/13 19:32:35 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strstr(char *str, char *d)
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
			break;
		i++;
	}
	while (d[i + j + 1] == ' ')
		i++;
	while (d[i + j + 1] != '\n')
	{
		ft_putchar(d[i + j + 1]);
		i++;
	}
}

int		main(void)
{
	int fichero;
	char *dicc;
	char *numero = "100"
	int i;
	char c;
	int error;

	fichero = open("numbers.dict.txt", O_RDONLY);
	dicc = (char *)malloc(sizeof(fichero));
	i = 0;
	if (fichero == -1)
	{
		error = 1;
		return (1);
	}
	while (read(fichero, &c, 1) != 0)
	{
		dicc[i] = c;
		i++;
	}
	ft_strstr(numero, dicc);
	close(fichero);
	return (0);
}
