/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:10:39 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/15 17:03:05 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	ft_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int	ft_is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

int	ft_is_alpha(char str)
{
	if ((str < 'a' || str > 'z') && (str < 'A' || str > 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if (word == 1)
			ft_upper(&str[i]);
		else
			ft_lower(&str[i]);
		if (ft_is_numeric(str[i]) || ft_is_alpha(str[i]))
		{
			word = 0;
			i++;
		}
		else
		{
			word = 1;
			i++;
		}
	}
	return (str);
}
