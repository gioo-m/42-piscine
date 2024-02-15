/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:04:53 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/07 18:49:24 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] == s2[count] && s1[count] != '\0' && count < n)
	{
		count++;
	}
	if (count == n)
	{
		return (0);
	}
	return (s1[count] - s2[count]);
}
/* int	main(void)
{
	printf("%d\n", ft_strncmp("test1", "test2", 5));
	return (0);
} */
