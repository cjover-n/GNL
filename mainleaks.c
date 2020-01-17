#include "get_next_line.h"

int		main()
{
	char *line;
	int		fd;
	fd = open("txt", O_RDONLY);
	line = NULL;
	while ((get_next_line(fd, &line)) > 0)
	{
		printf("linea: %s\n", line);
		free(line);
		line = NULL;
	}
	free(line);
	system("leaks a.out");
	line = NULL;
}
