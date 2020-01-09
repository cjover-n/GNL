/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 03:53:03 by cjover-n          #+#    #+#             */
/*   Updated: 2020/01/09 19:14:17 by cjover-n         ###   ########.fr       */
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
		return (-1);
	bytes = read(fd, heap, BUFFER_SIZE);
	while (bytes > 0)
	{
		heap[bytes] = '\0';
		if (stat[fd] == NULL)
			stat[fd] = ft_strnew(1);
		
	}
}

/*
int		main(void)
{
	int fd;

	fd = read("text.txt", O_RDONLY);
	
}
*/
