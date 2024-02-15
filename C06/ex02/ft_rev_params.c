/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:11:45 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/15 17:10:42 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	i = argc - 1;
	while (i > 0)
	{
		c = 0;
		while (argv[i][c] != 0)
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
