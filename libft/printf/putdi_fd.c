/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdi_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:30:00 by f██████           #+#    #+#             */
/*   Updated: 2022/09/08 10:48:45 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	putdi_fd(int n, int fd)
{
	int				i;
	unsigned int	n1;

	i = 1;
	n1 = n;
	ft_putnbr_fd(n, fd);
	if (n < 0)
	{
		n1 = -n;
		i++;
	}
	else
		n1 = n;
	while (n1 > 9)
	{
		n1 = n1 / 10;
		i++;
	}
	return (i);
}
