/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:19:11 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/14 22:21:39 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error(char *b)
{
	int i;
	int j;

	i = 0;
	while (b[i])
	{
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		if (b[i] == '\t' || b[i] == '+' || b[i] == '-' ||
				b[i] == '\n' || b[i] == '\v' || b[i] == '\f' ||
				b[i] == '\r' || b[i] == ' ')
			return (0);
		i++;
	}
	return (i);
}

int		last_digit(char *s, char *b, int i)
{
	int j;
	int k;

	while (s[i])
	{
		j = 0;
		k = 0;
		while (b[j])
		{
			if (s[i] == b[j])
				k = 1;
			j++;
		}
		if (k == 0)
			break ;
		i++;
	}
	i--;
	return (i);
}

int		number(char *s, char *b, int k, int i)
{
	int l;
	int p;
	int j;
	int n;

	l = error(b);
	if (l == 1 || l == 0)
		return (0);
	p = 1;
	i = last_digit(s, b, i);
	n = 0;
	while (i >= k)
	{
		j = 0;
		while (b[j])
		{
			if (b[j] == s[i])
				break ;
			j++;
		}
		n = n + j * p;
		p = p * l;
		i--;
	}
	return (n);
}

int		ft_atoi_base(char *s, char *base)
{
	int i;
	int signo;
	int k;

	signo = 0;
	i = 0;
	while ((s[i] != '\0') && (s[i] == '\t' || s[i] == '\n' ||
				s[i] == '\v' || s[i] == '\f' ||
				s[i] == '\r' || s[i] == ' '))
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
	return (signo * number(s, base, k, i));
}
