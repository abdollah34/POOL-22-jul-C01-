/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:35:12 by ayaarab           #+#    #+#             */
/*   Updated: 2024/08/13 12:57:15 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += (size - 1) * ft_strlen(sep);
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*big_alloc;

	if (size == 0)
	{
		big_alloc = malloc(1);
		if (big_alloc)
			*big_alloc = '\0';
		return (big_alloc);
	}
	big_alloc = malloc((ft_total_length(size, strs, sep) + 1) * sizeof(char));
	if (!big_alloc)
		return (NULL);
	big_alloc[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(big_alloc, strs[i]);
		if (i < size - 1)
			ft_strcat(big_alloc, sep);
		i++;
	}
	return (big_alloc);
}

// int main()
// {
//     char *strings[] = {"Hello", "world", "from", "ft_strjoin"};
//     char *separator = "";
//     int size = 4;
//     char *result = ft_strjoin(size, strings, separator);
//     printf("%s\n", result);
//     free(result);
//     return 0;
// }
