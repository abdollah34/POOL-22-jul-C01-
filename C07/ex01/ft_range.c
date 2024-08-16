/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:56:51 by ayaarab           #+#    #+#             */
/*   Updated: 2024/08/06 22:16:34 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;
	int	range;

	if (min >= max)
		return (NULL);
	range = max - min;
	i = 0;
	ptr = (int *)malloc(range * sizeof(int));
	if (!ptr)
		return (NULL);
	while (i < range)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	min = 5;
// 	int	max = 10;
// 	int	*result;
// 	int	i;

// 	result = ft_range(min, max);
// 	if (result == NULL)
// 	{
// 		printf("Error: Invalid range or memory allocation failed.\n");
// 		return (1);
// 	}

// 	printf("Array for range %d to %d:\n", min, max);
// 	for (i = 0; i < max - min; i++)
// 	{
// 		printf("%d ", result[i]);
// 	}
// 	printf("\n");

// 	free(result);
// 	return (0);
// }