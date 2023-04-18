/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:55:54 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 13:29:06 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_ptr(unsigned long nb, int *counter)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb < 16)
		ft_putchar((str[nb % 16]), counter);
	else
	{
		ft_hex_ptr((nb / 16), counter);
		ft_hex_ptr((nb % 16), counter);
	}
}
