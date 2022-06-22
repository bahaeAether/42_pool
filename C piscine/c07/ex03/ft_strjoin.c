/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:16:01 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/22 15:34:08 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		*result = '\0';
		return (result);
	}
	i = 0;
	count = 0;
	while (i < size)
		count += ft_strlen(strs[i++]);
	result = malloc((1 + count + ((size - 1) * ft_strlen(sep))) * sizeof(char));
	ft_strcpy(result, strs[0]);
	i = 1;
	while (i < size && result)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i++]);
	}
	return (result);
}
