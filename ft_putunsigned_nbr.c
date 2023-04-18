/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:25:42 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 14:45:12 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_nbr(unsigned int nb, int *counter)
{
	if (nb > 9)
	{
		ft_putunsigned_nbr((nb / 10), counter);
		ft_putchar(((nb % 10) + 48), counter);
	}
	else
		ft_putchar((nb + 48), counter);
}
