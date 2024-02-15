/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:49:11 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/12 11:49:53 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 1 || power < 1)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/* int main(void)
{
	printf("%d", ft_recursive_power(6, -2));
	return (0);
}
 */