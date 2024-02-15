/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:14:35 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/12 21:00:03 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_size;
	int	i;

	range_size = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range_size = max - min;
	*range = malloc(sizeof(int) * range_size);
	if (!*range)
		return (-1);
	i = -1;
	while (min < max)
	{
		(*range)[++i] = min;
		min++;
	}
	return (range_size);
}
int	main(void)
{
	int result;
	int *ultimate_arr;
	int min;
	int max;

	min = 1;
	max = 10;
	result = ft_ultimate_range(&ultimate_arr, min, max);
	printf("%d\n", result);
	return (0);

}