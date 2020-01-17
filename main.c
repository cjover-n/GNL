#include "get_next_line.h"

int     main(void)
{
    char    *line;
    int     fd;
    int     ret;
    fd = open("text.txt", O_RDONLY);
    line = NULL;
    ret = 1;
    while (ret)
    {
        ret = get_next_line(fd, &line);
        printf("%s\treturn value - %d\n", line, ret);
    }
    close(fd);
}
