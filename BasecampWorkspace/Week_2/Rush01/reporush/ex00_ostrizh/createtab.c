
#include <stdlib.h>

void	ft_putchar(char c);
void	print(char **arr);


int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char  	**grid;

	grid = (char**) malloc(sizeof(char*)*9);
	i = 0;
	j = 0;
	while(i < 9)
	{
		grid[i] = (char*)malloc(sizeof(char)*9);
		while (j < 9)
		{
			grid[i][j] = argv[i+1][j];
			j++;
		}
		i++;
		j = 0;

	}
    print(grid);
    return 0;
}

//example of out 
//./a.out "336508400" "336508401" "336508402" "336508403" "336508400" "336508400" "336508400" "336508400" "336508409"