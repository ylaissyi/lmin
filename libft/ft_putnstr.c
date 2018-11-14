/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 17:24:41 by ddombya           #+#    #+#             */
/*   Updated: 2018/08/28 18:38:20 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void		ft_putnstr(const char *s, int len)
{
	char c;

	if (s)
	{
		while (len--)
		{
			c = *s;
			write(1, &c, 1);
			s++;
		}
	}
	return ;
}
