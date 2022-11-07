/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:14:44 by mbouderr          #+#    #+#             */
/*   Updated: 2022/11/07 22:07:55 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
#define ft_printf_h

#include <stdarg.h>
#include <unistd.h>
size_t ft_putchar(char c);
size_t ft_putstring( char *str);
size_t	ft_putnbr(long long n);
int ft_putunsigned(unsigned int i);
size_t ft_puthexlow(unsigned int i, char c);
int   ft_adress(void *);
int ft_printf(const char *str, ...);


#endif