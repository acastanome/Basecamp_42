 
#include "ft.h"

//should create t_map map first (proto in ft.h)

char	**creategrid(t_map map, char **argv)//how to pass stdin as str
{
	int		i;
	int		j;
	char	**grid;

	grid = (char**)malloc(sizeof(char*) * map.lines + 1); // \0
	i = 0;
	j = 0;
	while (i < map.lines)
	{
		grid[i] = (char*)malloc(sizeof(char) * map.columns + 1); // \0
		while (j < map.columns)
		{
			grid[i][j] = argv[i + 1][j]; //to get it here. tired, check this
			j++;
		}
		i++;
		j = 0;
	}
	return (grid);
}//remember remember the 1st of november aka. free
