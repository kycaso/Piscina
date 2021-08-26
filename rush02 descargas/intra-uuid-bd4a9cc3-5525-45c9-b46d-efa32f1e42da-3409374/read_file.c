/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorrado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:30:03 by mtorrado          #+#    #+#             */
/*   Updated: 2020/12/12 21:18:11 by mtorrado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_buscar_coincidencias(char *lista, char *numero)
{
	int i;
	int encontrado;
	int j;

	i = 0;
	j = 0;
	encontrado = 0;
	printf("el numero es: %s\n", numero);
		while (lista[i] != '\0')
		{
	//		printf("lista en i es: %c\n", lista[i]);
	//		printf("el numero en i es: %c\n", numero[i]);
		   if (lista[i] == numero [j] && lista[i + 1] == ':')
		   {
			   encontrado = 1;
			   i = i + 2;
			   while (lista[i] == ' ')
			   {
				   i++;
			   }
			   if (numero[j] == '\0' && encontrado == 1 && (lista[i] >= 'a' && lista[i] >= 'z'))
			   {
					   while (lista[i] != '\n')
					   {
					   		ft_putchar(lista[i]);
							i++;
						}
				}
			}
			else if (lista[i] == numero[j] && (lista[i + 1] >= '0' && lista [i + 1] <= '9')) 
			{
				while(lista[i] == numero[j] && lista[i + 1] != ':')
				{
					i++;
					j++;
				}
				if(lista[i] == ':')
				{
					encontrado = 1;
					i = i + 1;
				}	
				while (lista[i] == ' ')
					i++;
				if (numero[j] == '\0' && encontrado == 1 && (lista[i] >= 'a' && lista[i] <= 'z'))
				{
					while (lista[i] != '\n')
					{
						ft_putchar(lista[i]);
						i++;
					}
				}
			}
			i++;
		}
}

int	main(void)
{
	int fichero;
	int error;
	char c;
	int i;
	int contador;
	char *lista;
	char *numero = "4";

	contador = 0;
	i = 0;
	lista = (char *)malloc(691);
	fichero = open("numbers.dict.txt", O_RDONLY);

	if (fichero == -1)
	{
		error = 1;
		return (1);
	}
	while (read(fichero, &c, 1) != 0)
	{
		lista[i] = c;
		contador ++;
		i++;
	}
	printf("el contador es: %d\n", contador);
	printf("i es: %d\n",i);
	i = 0;
/*	while (i < 691)
	{
		ft_putchar(lista[i]);
		i++;
	}*/
	ft_buscar_coincidencias(lista, numero);
	return (0);
}
