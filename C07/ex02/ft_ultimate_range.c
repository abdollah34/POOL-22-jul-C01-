/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaarab <ayaarab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:24:26 by ayaarab           #+#    #+#             */
/*   Updated: 2024/08/10 16:54:44 by ayaarab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr = (int *)malloc(sizeof(int) * size);
	if (!ptr)
		return (-1);
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (size);
}

// int main()
// {
// 	int min = 5;
// 	int max = 10;
// 	int *range;
// 	int r = 4;
// 	range = &r;
// 	printf("%d",ft_ultimate_range(&range,min,max));
// }