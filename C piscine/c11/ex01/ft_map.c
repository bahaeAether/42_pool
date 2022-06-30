/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:04:00 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/29 18:21:44 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*returns;

	returns = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		returns[i] = f(tab[i]);
		i++;
	}
	return (returns);
}
