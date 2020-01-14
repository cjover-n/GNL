/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:11:49 by cjover-n          #+#    #+#             */
/*   Updated: 2020/01/14 13:12:08 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int     get_next_line(int fd, char **line)
{
    static char     *stat[4096];
    char            *heap;
    char            buf[BUFFER_SIZE + 1];
    int             bytes;

    if (!stat[fd])
        stat[fd] = ft_strdup("");
    while ((bytes = read(fd, buf, BUFFER_SIZE)) > 0)
    {
        buf[bytes] = '\0';
        heap = ft_strjoin(stat[fd], buf);
        free(stat[fd]);
        if (ft_strchr((stat[fd] = heap), '\n'))
            break ;
    }
    if (bytes < 0 || !line || !fd)
        return (-1);
    *line = ft_strcdup(stat[fd], '\n');
    heap = NULL;
    if (!(stat[fd][ft_strlen(*line)] == '\0'))
        heap = ft_strdup(ft_strchr(stat[fd], '\n') + 1);
    free(stat[fd]);
    return ((stat[fd] = heap) == NULL ? 0 : 1);
}
