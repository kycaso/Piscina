/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:27:02 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/17 22:30:06 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char *c;

	c = str;
	while (*c != 0)
	{
		write(1, c, 1);
		c++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_argc(char *str[], int size)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[j], str[i]) < 0)
			{
				aux = str[i];
				str[i] = str[j];
				str[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	ft_sort_argc(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
