/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wblotz-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:24:22 by wblotz-c          #+#    #+#             */
/*   Updated: 2021/09/30 12:58:51 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
typedef struct	s_list
{
	struct s_list *next;
	void		  *data;
}				  t_list;

#endif