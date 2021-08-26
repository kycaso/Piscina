/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:37:37 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/14 22:11:11 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number(char *str, int k, int i)
{
	int p;
	int n;

	p = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	i--;
	n = 0;
	while (i >= k)
	{
		n = n + (str[i] - '0') * p;
		p = 10 * p;
		i--;
	}
	return (n);
}

int		ft_atoi(char *s)
{
	int i;
	int signo;
	int k;

	signo = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\v' ||
			s[i] == '\f' || s[i] == '\r' || s[i] == ' ')
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			signo++;
		i++;
	}
	if (signo % 2 == 0)
		signo = 1;
	else
		signo = -1;
	k = i;
	return (signo * number(s, k, i));
}
