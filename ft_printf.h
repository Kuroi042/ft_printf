/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:14:44 by mbouderr          #+#    #+#             */
/*   Updated: 2022/11/05 23:02:52 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
#define ft_printf_h

#include <stdarg.h>
#include <unistd.h>
size_t ft_putchar(char c);
size_t ft_putstring( char *str);
size_t	ft_putnbr(long long n);
size_t ft_putunsigned(unsigned long i);



#endif