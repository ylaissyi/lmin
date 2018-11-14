/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_room.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:42:43 by ddombya           #+#    #+#             */
/*   Updated: 2018/11/06 16:07:33 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		clear_room(t_room *room)
{
	while (room)
	{
		room->tr = false;
		free(room->tab);
		room->tab = NULL;
		free(room->dist);
		room->dist = NULL;
		room = room->next;
	}
}

void		clear_lst(t_room **lst)
{
	int i;

	if (!(*lst))
		return ;
	free((*lst)->name);
	i = 0;
	while ((*lst)->tube && (*lst)->tube[i])
		ft_strdel(&(*lst)->tube[i++]);
	ft_strdel(&(*lst)->tube[i]);
	free((*lst)->tube);
	(*lst)->tube = NULL;
	if ((*lst)->tab)
	{
		free((*lst)->tab);
		(*lst)->tab = NULL;
	}
	if ((*lst)->dist)
	{
		free((*lst)->dist);
		(*lst)->dist = NULL;
	}
	free(*lst);
	*lst = NULL;
}

void		lst_clear(t_main elem)
{
	t_room	*tmp;
	t_room	**tmpi;

	tmpi = &elem.ant_room;
	while (elem.ant_room)
	{
		tmp = elem.ant_room;
		elem.ant_room = elem.ant_room->next;
		clear_lst(&tmp);
	}
	free(*tmpi);
	*tmpi = NULL;
}

void		clear_path(t_main elem)
{
	int i;

	i = 0;
	while (elem.path && elem.path[i])
	{
		if (elem.path[i][0] && elem.path[i][0] != elem.end)
			clear_lst(&elem.path[i][0]);
		free(elem.path[i]);
		elem.path[i] = NULL;
		i++;
	}
	free(elem.path);
	elem.path = NULL;
}

void		clear_main(t_main *elem)
{
	ft_strdel(&elem->file);
}
