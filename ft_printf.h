/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:33:39 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 14:44:03 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *counter);
void	ft_hex_lower(unsigned int nb, int *counter);
void	ft_hex_ptr(unsigned long nb, int *counter);
void	ft_hex_upper(unsigned int nb, int *counter);
void	ft_putnbr(int nb, int *counter);
void	ft_putstr(char	*str, int *counter);
void	ft_putunsigned_nbr(unsigned int nb, int *counter);
void	ft_printf_checker(va_list ptr, char checker, int *counter);
int		ft_printf(const char *a, ...);

#endif