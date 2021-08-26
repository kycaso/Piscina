/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:34:36 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/12 10:55:45 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_return(char *s1, char *s2, int  
{
	int i;
	int p;

	i = 0;
	p = 0;
	if (k == 0 && l == 0)
		return (0 + s1[0]);
	else if (k == 0 && l == 1)
		return (0 - s2[0]);
	while (i < k)
	{
		if (s1[i] - s2[i] != 0)
		{
			p = p + s1[i] - s2[i];
			return (p);
		}
		i++;
	}
	if (l == 0)
		p = s1[i];
	else
		p = -s2[i];
	return (p);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int p;

	j = 0;
	i = 0;
	p = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i > j)
		p = ft_return(s1, s2, j, 0);
	else if (i <= j)
		p = ft_return(s1, s2, i, 1);
	return (p);
}
