/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:04:55 by ddombya           #+#    #+#             */
/*   Updated: 2018/11/06 14:14:18 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	init_main(t_main *elem)
{
	elem->hex = -1;
	elem->print_path = -1;
	elem->file = ft_strnew(1);
	elem->ant_room = NULL;
	elem->start = NULL;
	elem->end = NULL;
	elem->path = NULL;
	elem->room = false;
	elem->tube = false;
}
