/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:14:20 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/15 17:10:44 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
// mostrar

int	ft_strncmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// comparar

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
// trocar

int	main(int argc, char *argv[])
{
	int	iav;
	int	icac;

	icac = 1;
	while (icac < argc - 1)
	{
		iav = 1;
		while (iav < argc - 1)
		{
			if (ft_strncmp(argv[iav], argv[iav + 1]) > 0)
				ft_swap(&argv[iav], &argv[iav + 1]);
			iav++;
		}
		icac++;
	}
	iav = 1;
	while (iav < argc)
	{
		ft_putstr(argv[iav]);
		write(1, "\n", 1);
		iav++;
	}
	return (0);
}
// junta todos

//argc

//contar os argumentos
//organizar
//int a int b int temp (swap)
//escrever strings 

//argv
//putstring