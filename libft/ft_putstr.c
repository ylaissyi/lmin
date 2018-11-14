/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:45:49 by ddombya           #+#    #+#             */
/*   Updated: 2018/08/28 18:38:31 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	ft_putstr(const char *s)
{
	size_t i;

	i = ft_strlen(s);
	if (s)
		write(1, s, i);
	return ;
}
