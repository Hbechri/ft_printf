/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:04:17 by hbechri           #+#    #+#             */
/*   Updated: 2023/01/25 13:51:32 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_checker(va_list ptr, char checker, int *counter)
{
	if (checker == 'c')
		ft_putchar(va_arg(ptr, int), counter);
	else if (checker == 's')
		ft_putstr(va_arg(ptr, char *), counter);
	else if (checker == 'p')
	{
		ft_putstr("0x", counter);
		ft_hex_ptr(va_arg(ptr, unsigned long), counter);
	}
	else if (checker == 'd' || checker == 'i')
		ft_putnbr(va_arg(ptr, int), counter);
	else if (checker == 'u')
		ft_putunsigned_nbr(va_arg(ptr, unsigned int), counter);
	else if (checker == 'x')
		ft_hex_lower(va_arg(ptr, unsigned int), counter);
	else if (checker == 'X')
		ft_hex_upper(va_arg(ptr, unsigned int), counter);
	else if (checker == '%')
		ft_putchar('%', counter);
}

int	ft_printf(const char *a, ...)
{
	va_list	pt;
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	va_start(pt, a);
	while (a[i])
	{
		if (a[i] == '%')
		{
			i++;
			ft_printf_checker(pt, a[i], &counter);
		}
		else
			ft_putchar(a[i], &counter);
		i++;
	}
	va_end(pt);
	return (counter);
}

int main()
{
	ft_printf("");
}