/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reinitialize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:40:49 by ddombya           #+#    #+#             */
/*   Updated: 2018/11/06 14:40:56 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	print_reinitialize(t_main *elem)
{
	int		i;
	t_room	*tmp;

	i = 0;
	while (elem->path[i])
	{
		if (elem->path[i][0])
		{
			tmp = init_room(elem->path[i][0]->name, 0, 0);
			elem->path[i][0] = tmp;
		}
		i++;
	}
}
