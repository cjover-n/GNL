/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 03:53:03 by cjover-n          #+#    #+#             */
/*   Updated: 2019/12/19 19:55:48 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char		*stat[4096];
	char			*heap;
	size_t			*bytes;
	int				i;

	if (!(heap = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))) || 
			!line || !fd)
		return (NULL);
	bytes = read(fd, heap, BUFFER_SIZE);
	while (*heap != 0)
	{
		
	}
}
