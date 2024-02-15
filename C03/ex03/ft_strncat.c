/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:18:42 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/07 18:49:54 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>  */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count2;

	count2 = 0;
	while (dest[count2] != '\0')
	{
		count2++;
	}
	count = 0;
	while (src[count] != '\0' && count < nb)
	{
		dest[count2 + count] = src[count];
		count++;
	}
	dest[count2 + count] = '\0';
	return (dest);
}
/* nt	main(void)
{
	char src[13] = "World";
	char dest[8] = "Hello, ";
	printf("%s", ft_strncat(dest, src, 5));
	return (0);
}
*/
