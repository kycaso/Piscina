/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:31:10 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/17 11:45:31 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int n, int p)
{
	int k;

	k = n;
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else
	{
		while (p > 1)
		{
			n = n * k;
			p--;
		}
		return (n);
	}
}
