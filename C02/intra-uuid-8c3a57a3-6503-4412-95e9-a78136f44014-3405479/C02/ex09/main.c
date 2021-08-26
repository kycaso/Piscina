/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 08:00:43 by fbelda-h          #+#    #+#             */
/*   Updated: 2020/12/08 11:58:49 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *pepe);

int		main(void)
{
	char	cadena[] = "elpepe y ete sech son brothers";
	char	cadena2[] = "Hola 42pepes boca-abajo";
	char	cadena3[] = "salut, commet tu vAs ? 42Mots qUarante-Deux: cinquante+et+un";
	char	cadena4[] = "don Pepon";
	char	*punt;

	punt = ft_strcapitalize(cadena);
	printf("%s \n" , punt);
	punt = ft_strcapitalize(cadena2);
	printf("%s \n" , punt);
	punt = ft_strcapitalize(cadena3);
	printf("%s \n" , punt);
	punt = ft_strcapitalize(cadena4);
	printf("%s \n" , punt);
}
