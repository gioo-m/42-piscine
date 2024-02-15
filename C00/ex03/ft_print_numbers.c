/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:10:44 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/01/27 16:30:40 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	int	r;

	r = 0;
	while (r <= 9)
	{
		ft_print_number(r + '0');
		r = r + 1;
	}
}
