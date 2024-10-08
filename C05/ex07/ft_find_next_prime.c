/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:17:48 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/13 19:28:34 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	y;

	y = nb - 1;
	while (y > 1)
	{
		if (nb % y == 0)
		{
			nb++;
			y = nb;
		}
		y--;
	}
	return (nb);
}
