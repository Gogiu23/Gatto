/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/01/08 18:06:16 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

// Setting player collision points
void	player_position(t_so_long *so_long)
{
	t_player	*p;

	p = so_long->player;
	printf("p->a[0]: %d\tp->pp[0]: %d\n", p->a[0], p->pp[0]);
	p->a[0] = p->pp[0];
	printf("p->a[0]: %d\tp->pp[0]: %d\n", p->a[0], p->pp[0]);
	p->a[1] = p->pp[1];
	printf("p->a[1]: %d\tp->pp[1]: %d\n", p->a[1], p->pp[1]);
	p->b[0] = p->a[0];
	printf("p->b[0]: %d\tp->a[0]: %d\n", p->b[0], p->a[0]);
	p->b[1] = p->a[1] + BPX;
	printf("p->b[1]: %d\tp->a[1]: %d\n", p->b[1], p->a[1]);
	p->c[0] = p->a[0] + BPX;
	printf("p->c[0]: %d\tp->a[0]: %d\n", p->c[0], p->a[0]);
	p->c[1] = p->a[1];
	printf("p->c[1]: %d\tp->a[1]: %d\n", p->c[1], p->a[1]);
	p->d[0] = p->a[0] + BPX;
	printf("p->d[0]: %d\tp->a[0]: %d\n", p->d[0], p->a[0]);
	p->d[1] = p->a[1] + BPX;
	printf("p->d[1]: %d\tp->a[1]: %d\n", p->c[1], p->a[1]);
//	exit (0);
}
