/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 16:53:29 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/17 16:55:57 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int j;

	if (nb <= 2)
		return (2);
	else if (nb == 3)
		return (3);
	i = 2;
	j = 2;
	while (nb < 2147483647)
	{
		i = 2;
		j = 2;
		while (i * i <= 46340)
		{
			if (nb % i != 0)
				j++;
			i++;
		}
		if (j == i)
			return (nb);
		nb++;
	}
	return (0);
}