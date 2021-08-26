/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:19:48 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/17 11:50:47 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recur(int i, int v, int k, int p)
{
	if (i == 1)
		return (v);
	else
	{
		v = k + p;
		p = k;
		k = v;
		i--;
		return (ft_recur(i, v, k, p));
	}
}

int		ft_fibonacci(int i)
{
	int j;
	int k;
	int p;
	int v;

	j = 1;
	p = 0;
	k = 1;
	v = 1;
	if (i == 1 || i == 0)
		return (i);
	else if (i < 0)
		return (-1);
	else
	{
		return (ft_recur(i, v, k, p));
	}
}
