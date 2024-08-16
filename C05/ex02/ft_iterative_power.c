/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abagueri <abagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:43:19 by abagueri          #+#    #+#             */
/*   Updated: 2024/08/13 13:27:16 by abagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else 
	{
		while (power > 0)
		{
			r *= nb;
			power--;
		}
	}
	return (r);
}
