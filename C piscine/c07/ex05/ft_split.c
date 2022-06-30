/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:20:05 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/30 16:20:11 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_there(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_strs(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_there(sep, str[i]) && str[i])
			i++;
		if (str[i])
			count++;
		while (!is_there(sep, str[i]) && str[i])
			i++;
	}
	return (count);
}

int	len_str(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !is_there(sep, str[i]))
		i++;
	return (i);
}

char	*dup_str(char *str, int n)
{
	char	*dup;
	int		i;

	dup = malloc(n + 1);
	if (!dup)
		return (0);
	i = 0;
	while (str[i] && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;
	int		j;
	int		len;

	size = count_strs(str, charset);
	tab = malloc((size + 1) * sizeof(char *));
	if (!tab)
		return (0);
	i = -1;
	j = 0;
	while (++i < size)
	{
		while (str[j] && is_there(charset, str[j]))
			j++;
		len = len_str(&str[j], charset);
		tab[i] = dup_str(&str[j], len);
		if (!tab[i])
			return (0);
		str += len;
		j++;
	}
	tab[i] = 0;
	return (tab);
}
