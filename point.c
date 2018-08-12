/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:33:59 by mpetruno          #+#    #+#             */
/*   Updated: 2018/08/12 16:41:52 by mpetruno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point	*make_pt(int x, int y)
{
	t_point	*p;

	if ((p = (t_point *)malloc(sizeof(t_point))) == 0)
		ft_error();
	p->x = x;
	p->y = y;
	return (p);
}