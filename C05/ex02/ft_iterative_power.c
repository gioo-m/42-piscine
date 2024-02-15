/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:43:53 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/12 11:58:56 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = 1;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		product = product * nb;
		power--;
	}
	return (product);
}
/* int main(void)
{
	printf("%d", ft_iterative_power(6, -2));
	return (0);
} */
