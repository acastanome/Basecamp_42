#include "ft_heads.h"
#include <stdio.h>

#define BUF_SIZE 4096
#define SINGLE_BUF 1

int	main(int argc, char **argv)
{
	char	**grid;
	char	z[1];
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;
	int		fd;
	int		filelaskuri = 1;
	int		x;
	int		y;

	i = 0;
	if (argc > 1)
	{
		fd = open(argv[filelaskuri], O_RDONLY);
		if (fd == -1)
		{
			printf("ei onnistu HÄ");
		}
		while ((read(fd, z, SINGLE_BUF)))
		{
			buf[i] = z[0];
			i++;
		}
	}
	x = pick_x(buf);
	y = pick_y(buf);
	grid = create_grid(buf, x, y);
	print(grid, x, y);
	close(fd);
	return (0);
}
