/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:06:34 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/15 17:10:37 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	ac;

	ac = 1;
	while (ac < argc)
	{
		i = 0;
		while (argv[ac][i] != '\0')
		{
			ft_putchar(argv[ac][i]);
			i++;
		}
		ft_putchar('\n');
		ac++;
	}
	return (0);
}
