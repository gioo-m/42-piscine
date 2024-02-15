/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:04:11 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/07 18:49:37 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
 */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}
/* int	main(void)
{
	char src[6] = "loyse";
	char dest[19] = "programadora ";

	printf("%s", ft_strcat(dest, src));
	return (0);
} */
