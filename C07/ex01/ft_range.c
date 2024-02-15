/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:51:20 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/12 18:37:06 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr_range;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	arr_range = malloc(sizeof(int) * range);
	if (!arr_range)
		return (NULL);
	i = -1;
	while (min < max)
	{
		arr_range[++i] = min;
		min++;
	}
	return (arr_range);
}
int	main(void)
{
	int i;
	int min;
	int max;
	int *result_arr;

	i = -1;
	min = 1;
	max = 10;
	result_arr = ft_range(min, max);
	while (++i < max - min)
		printf("%d\n", result_arr[i]);
	free(result_arr);
	return (0);
}