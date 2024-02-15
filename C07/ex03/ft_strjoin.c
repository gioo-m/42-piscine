/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:02:12 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/14 15:47:04 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

char	*fail(void)
{
	char	*str;

	str = malloc(sizeof(char));
	str = "\0";
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		i;

	i = 0;
	length = 0;
	if (size == 0)
		return (fail());
	while (strs[++i] != 0)
		length += ft_strlen(strs[i]);
	str = malloc(sizeof(char) * (length + ((size - 1) * ft_strlen(sep))) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (strs[++i] != 0)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size)
			str = ft_strcat(str, sep);
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str;

	(void)argc;
	str = ft_strjoin(3, argv, ", ");
	printf("%s\n", str);
	free(str);
}
