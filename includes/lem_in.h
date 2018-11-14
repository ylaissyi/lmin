/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:52:16 by ddombya           #+#    #+#             */
/*   Updated: 2018/11/06 15:53:44 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <stdbool.h>
# include <errno.h>
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"
# include "../libft/includes/get_next_line.h"

# define START cmd[0]
# define END cmd[1]
# define BUFSIZE 1
# define ERROR 1
# define HASH '#'
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PINK "\033[35m"
# define CYAN "\033[36m"
# define GREY "\033[37m"
# define NOCOLOR "\033[0m"

typedef struct		s_room
{
	char			*name;
	int				x;
	int				y;
	char			**tube;
	bool			tr;
	bool			active;
	int				*dist;
	int				hex;
	struct s_room	**tab;
	struct s_room	*next;
}					t_room;

typedef struct		s_main
{
	int				hex;
	int				print_path;
	char			*file;
	t_room			*ant_room;
	t_room			*start;
	t_room			*end;
	t_room			***path;
	bool			room;
	bool			tube;
}					t_main;

t_room				*init_room(char *str, int x, int y);
t_room				*lst_add(t_room **alst, t_room *new_elem);
t_room				*lst_search(t_room *elem, char *name);
void				lst_pipe(t_room *elem, char **tube, bool b);

void				read_map(t_main *elem);

void				init_main(t_main *elem);

void				create_path(t_main *elem);
void				dijkstra_new(t_room *dst, t_room *src, int dist);
void				dijkstra_process(t_room *start, t_room *ant_room, int dist);
void				print_path(t_room *end, t_room *start, t_room ***path);
void				print_display(t_main *elem, int max, bool *print, int nb);
void				print_lemin(t_main *elem);

void				print_reinitialize(t_main *elem);

void				clear_room(t_room *room);
void				clear_lst(t_room **lst);
void				lst_clear(t_main elem);
void				clear_path(t_main elem);
void				clear_main(t_main *elem);

#endif
