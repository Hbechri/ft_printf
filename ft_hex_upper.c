/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:26:14 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 13:26:16 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_upper(unsigned int nb, int *counter)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar((str[nb % 16]), counter);
	else
	{
		ft_hex_upper((nb / 16), counter);
		ft_hex_upper((nb % 16), counter);
	}
}
