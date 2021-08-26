/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 13:20:22 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/17 11:46:03 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int n, int p)
{
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else if (p == 1)
		return (n);
	else
		return (n * ft_recursive_power(n, p - 1));
}
