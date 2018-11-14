/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <ddombya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:24:20 by ddombya           #+#    #+#             */
/*   Updated: 2018/11/06 16:03:25 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

inline void		ft_error(void)
{
	if (errno)
	{
		ft_printf("%s\n", strerror(errno));
		perror("lem-in");
		exit(EXIT_FAILURE);
	}
}
