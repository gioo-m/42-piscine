/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gidos-sa <gidos-sa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:44:43 by gidos-sa          #+#    #+#             */
/*   Updated: 2024/02/07 18:50:15 by gidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[count] != '\0')
	{
		count2 = 0;
		while (str[count + count2] == to_find[count2] 
			&& (str[count + count2] != '\0'))
		{
			count2++;
		}
		if (to_find[count2] == '\0')
		{
			return (str + count);
		}
		count++;
	}
	return (0);
}
/* int	main(void)
{
	char str[] = "Hello, World";
	char to_find[] = "World";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}  */
