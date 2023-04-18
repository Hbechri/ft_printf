/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:12:19 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 14:44:31 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *counter)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-', counter);
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr((nbr / 10), counter);
		ft_putchar(((nbr % 10) + 48), counter);
	}
	else
		ft_putchar((nbr + 48), counter);
}
