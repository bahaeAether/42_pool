/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:10:11 by baboulou          #+#    #+#             */
/*   Updated: 2022/06/29 02:20:27 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef int			(*t_function)(int, int);
t_function			op(char *str);
int					sum(int a, int b);
int					sub(int a, int b);
int					multi(int a, int b);
int					div(int a, int b);
int					mod(int a, int b);
int					ft_atoi(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);

#endif
