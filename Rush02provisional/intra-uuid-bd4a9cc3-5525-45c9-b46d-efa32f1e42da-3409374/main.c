/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:14:07 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/13 21:03:52 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int fichero;
	char *d;
	char *n = "4615444";
	int i;
	char c;
	int error;

	fichero = open("numbers.dict.txt", O_RDONLY);
	d = (char *)malloc(sizeof(691));
	i = 0;
	if (fichero == -1)
	{
		error = 1;
		return (1);
	}
	while (read(fichero, &c, 1) != 0)
	{
		d[i] = c;
		i++;
	}
	close(fichero);
	print_number(n, d);
	return (0);
}
