/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 11:03:05 by epeters-          #+#    #+#             */
/*   Updated: 2020/12/13 22:08:32 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_rush_02.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
