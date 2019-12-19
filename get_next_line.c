/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 03:53:03 by cjover-n          #+#    #+#             */
/*   Updated: 2019/12/19 18:38:46 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	int			bytes[BUFFER_SIZE + 1];
	char		*buf;
	char		*aux;
	static char	*num[4096];

	if (!(buf = malloc(bytes)) || fd < 0 || !line)
		return (-1);
	aux = read(fd, buf, bytes);
	while (*buf != '\0')
	{
		if (*buf == )
		{
			
		}
		buf++;
	}
}
