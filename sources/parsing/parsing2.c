/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/09/08 10:48:45 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fo_long.h"

int	allowed_char(t_fo_long *fo_long)
{
	int	i;
	int	j;

	i = 0;
	while (fo_long->map[i])
	{
		j = 0;
		while (fo_long->map[i][j])
		{
			if (
				!(fo_long->map[i][j] == '1' || fo_long->map[i][j] == '0'
				|| fo_long->map[i][j] == 'C' || fo_long->map[i][j] == 'M'
				|| fo_long->map[i][j] == 'P' || fo_long->map[i][j] == 'E'
				|| fo_long->map[i][j] == '*'
				|| (j == fo_long->gw - 1 && fo_long->map[i][j] == '\n'))
			)
				return (0);
			if (j == fo_long->gw -1 && fo_long->map[i][j] != '\n' )
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	required_char(t_fo_long *fo_long)
{
	int		i;
	int		j;
	int		elements[3];

	i = 0;
	ft_memset(elements, 0, sizeof(elements));
	while (fo_long->map[i])
	{
		j = 0;
		while (fo_long->map[i][j])
		{
			if (fo_long->map[i][j] == 'C')
				elements[0]++;
			else if (fo_long->map[i][j] == 'P')
				elements[1]++;
			else if (fo_long->map[i][j] == 'E')
				elements[2]++;
			j++;
		}
		i++;
	}
	if (elements[0] < 1 || elements[1] < 1 || elements[2] < 1)
		return (0);
	fo_long->nc = elements[0];
	return (1);
}

int	sides_is_wall(t_fo_long *fo_long)
{
	int	i;
	int	j;

	i = 0;
	while (fo_long->map[i])
	{
		j = 0;
		while (fo_long->map[i][j] && i < fo_long->gh &&
		j < fo_long->gw - 1)
		{
			if (i == 0 || i + 1 == fo_long->gh)
				if (fo_long->map[i][j] != '1')
					return (0);
			if (j == 0 || j + 2 == fo_long->gw)
				if (fo_long->map[i][j] != '1')
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}
