/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:00:41 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/12 12:39:46 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	n;

	n = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (n * n < nb)
	{
		if (n == 46341)
			return (0);
		n++;
	}
	if (n * n == nb)
	{
		return (n);
	}
	return (0);
}
/* int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
} */