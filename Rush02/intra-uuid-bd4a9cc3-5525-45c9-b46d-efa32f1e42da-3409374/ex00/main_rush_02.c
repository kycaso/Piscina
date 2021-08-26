/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 22:03:49 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/07/09 00:45:38 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	char *number;
	char *filestr;

/*	if (check_error(argc, argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}*/
	number = argc == 2 ? ft_atoa(argv[1]) : ft_atoa(argv[2]);
	filestr = get_dict(argc, argv);
	if (filestr == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	print_number(number, filestr);
	free(number);
	free(filestr);
}

char	*ft_atoa(char *str)
{
	char	*number;
	int		i;
	int		digits;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0' && *(str + 1) != '\0')
		str++;
	digits = count_digits(str);
	number = malloc(sizeof(*number) * (digits + 1));
	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		number[i] = *str;
		i++;
		str++;
	}
	number[digits] = '\0';
	return (number);
}

int		check_number(char *str)
{
	int sign;
	int digits;

	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str == '0' && *(str + 1) != '\0')
		str++;
	if (sign != 1)
		return (0);
	digits = count_digits(str);
	if (digits == -1 || digits > 10)
		return (0);
	return (1);
}

int		count_digits(char *str)
{
	int digits;

	digits = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (-1);
		str++;
		digits++;
	}
	return (digits);
}

int		check_error(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
		return (0);
	if (argc == 2 && !(check_number(argv[1])))
		return (0);
	if (argc == 3 && !(check_number(argv[2])))
		return (0);
	return (1);
}
