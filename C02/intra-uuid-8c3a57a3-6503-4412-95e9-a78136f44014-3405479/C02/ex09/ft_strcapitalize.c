/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 08:12:04 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/08 11:58:19 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	too_long(char c, char d)
{
	if (c < '0' || (c > '9' && c < 'A'))
	{
		if (d >= 'a' && d <= 'z')
			d = d - 32;
	}
	else if ((c > 'Z' && c < 'a') || c > 'z')
	{
		if (d >= 'a' && d <= 'z')
			d = d - 32;
	}
	return (d);
}

void	too_long2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;
	char	d;

	i = 0;
	j = 1;
	too_long2(str);
	while (*(str + j) != '\0')
	{
		d = *(str + j);
		c = *(str + i);
		if (i == 0 && (c >= 'a' && c <= 'z'))
			*(str + i) = c - 32;
		*(str + j) = too_long(c, d);
		i++;
		j++;
	}
	return (str);
}
