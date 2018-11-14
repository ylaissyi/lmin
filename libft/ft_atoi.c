/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 20:14:35 by ddombya           #+#    #+#             */
/*   Updated: 2018/08/28 18:36:08 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			ft_atoi(const char *s)
{
	int nb;
	int neg;

	nb = 0;
	neg = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\v' || *s == '\f'
			|| *s == '\r')
		s++;
	if (*s == '+' || *s == '-')
	{
		neg = (*s == '-' ? 1 : 0);
		s++;
	}
	while (DIGIT(*s))
		nb = nb * 10 + *s++ - '0';
	return (neg ? -nb : nb);
}
