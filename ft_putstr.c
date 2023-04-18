/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbechri <hbechri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:57:45 by hbechri           #+#    #+#             */
/*   Updated: 2022/12/03 14:44:42 by hbechri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*str, int *counter)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (str[i])
	{
		ft_putchar(str[i], counter);
		i++;
	}
}
