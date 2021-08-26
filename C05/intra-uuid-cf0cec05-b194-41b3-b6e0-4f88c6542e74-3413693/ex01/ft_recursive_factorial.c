/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:17:25 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/17 11:44:05 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 0)
		return (n * ft_recursive_factorial(n - 1));
	else
		return (0);
}
