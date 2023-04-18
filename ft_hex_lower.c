/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:43:53 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 13:28:57 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_lower(unsigned int nb, int *counter)
{
	char	*str;
	int		i;

	i = 0;
	str = "0123456789abcdef";
	if (nb < 16)
	{
		i++;
		ft_putchar((str[nb % 16]), counter);
	}
	else
	{
		ft_hex_lower((nb / 16), counter);
		ft_putchar((str[nb % 16]), counter);
		i++;
	}
}
