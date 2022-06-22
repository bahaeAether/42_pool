/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:20:32 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/18 12:49:29 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	f = 1;
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	return (f);
}
