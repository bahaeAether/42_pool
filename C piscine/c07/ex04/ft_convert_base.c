/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:40:27 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/30 20:24:47 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_all(int nb, int n, int size, int *i);

int	abs(int n);

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ultimate_valid_base(char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_in_base(base[i], base + i + 1) >= 0 || (base[i] >= 9
				&& base[i] <= 13))
			return (0);
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base, int size)
{
	int	n;
	int	sign;
	int	i;

	while (*str == 32 || (*str >= 7 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	n = 0;
	while (*str)
	{
		i = ft_in_base(*str, base);
		if (i < size && i >= 0)
			n = n * size + i;
		else
			break ;
		str++;
	}
	return (n * sign);
}

int	ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrlen(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	n = ultimate_valid_base(base_from);
	size = ultimate_valid_base(base_to);
	if (!n || !size)
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = abs(n);
	dest = malloc((ft_all(nb, n, size, &i) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
