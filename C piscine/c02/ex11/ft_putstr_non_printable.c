/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:06:04 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/16 16:38:18 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (*(str + i))
	{
		if (!ft_is_printable(*(str + i)))
		{
			ft_putchar('\\');
			ft_putchar(hex[*(str + i) / 16]);
			ft_putchar(hex[*(str + i) % 16]);
		}
		else
			ft_putchar(*(str + i));
		i++;
	}
}
