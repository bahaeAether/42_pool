/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:22:57 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/30 15:32:17 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbrlen(unsigned int n, unsigned int base_size);

int	ft_all(int nb, int n, int size, int *i)
{
	*i = ft_nbrlen(nb, size);
	if (n < 0)
		(*i)++;
	return (*i);
}

int	abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
