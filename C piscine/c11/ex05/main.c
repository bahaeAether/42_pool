/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:36:20 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/28 23:09:44 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	int	(*f)(int, int);

	if (ac == 4)
	{
		f = op(av[2]);
		if (f == 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		if (f == &div && ft_atoi(av[3]) == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (f == &mod && ft_atoi(av[3]) == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(f(ft_atoi(av[1]), ft_atoi(av[3])));
		ft_putchar('\n');
	}
	return (0);
}
