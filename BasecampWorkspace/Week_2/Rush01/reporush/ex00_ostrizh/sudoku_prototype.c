#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	**creategrid(char **argv)
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
    return (grid);
}

void print(char **arr)
{
    int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 8)
		{
			ft_putchar(arr[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar(arr[i][j]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int checker(char **grid, int row, int col, char num)
{
	/*check if it is possible to insert a number into an empty box
	first check row - if not return 0,
	then column - if not return 0,
	then square - if not return 0.
	If after all checks it possible - return 1*/
	int		x; // counter for check every element in row, grid[row][x]
	int		y; // counter for check every element in column, grid[y][col]
	int		i; // counter for check every element in row of square 3x3, grid[i+row][col]
	int     j; // counter for check every element in column of square 3x3, grid[row][j + col]
	int		startRow; // row start coordinate of square 3x3
	int		startCol; // column start coordinate of square 3x3

	x = 0;
	y = 0;
	i = 0;
	j = 0;
	startRow = row - row % 3; // get the starting point of the 3x3 square (because in every square
	startCol = col - col % 3; // we have 3 elements
	/* loop for check row */
	while (x <= 8) // until the counter elements reaches the end of row
	{
		if (grid[row][x] == num) // check if this number is already in the box 
			return (0); // in this case return 0
		x++; // increasing the counter
	}
	/* loop for check column */
    while (y <= 8) // totally the same idea
	{
		if (grid[y][col] == num)
			return (0);
		y++;
	}
	/* loop for check square 3x3 */
	while (i < 3) // until row counter of square 3x3 reaches end
	{
		while(j < 3) // until column counter of square 3x3 reaches end
		{
			if (grid[i + startRow][j + startCol] == num) // check if this number is already in the box 
				return (0); // in this case return 0
			j++; // increasing the counter of column
		}
		i++; // increasing the counter of row
	}
	return (1); // only if all checks were passed return 1, , which means that the number can be put
}

int solver(char **grid, int row, int col)
/* solve sudoku */
{
	char	num; // variable for the number to be checked and put
	
	num = '1'; // start from '1" string
	if (row == 9 - 1 && col == 9) // condition for ending recursion, when we went through the whole array to its end
		return (1);
	if (col == 9) // if in recursion reaches end of row
    {
        row++; // then go to next row
        col = 0; // and reser counter of column to start from first element in this next row
    }
	/* check if box is empty */
	if (grid[row][col] != '.') 
        return solver(grid, row, col + 1); // if empty just go to next element
	/* for every empty box start loop */
	while(num <= '9') // go through all possible values, which means from 1 to 9
	{
		if (checker(grid, row, col, num) == 1) // check if it possible to put this number 
        {
            grid[row][col] = num; // if it possible, then assign this number to the element in emmpty box
            if (solver(grid, row, col + 1) == 1) // then check by recursion(increase value of column to go for next element in row) 
                return (1); // is sudoku can be solved with this number in that place. If yes - return '1' as yes
        }
		grid[row][col] = '.'; // if not, reset the box
		num++; // and try the same with next number
	}
	return (0);
}

int main(int argc, char **argv)
{
	char  	**grid;
	
	grid = creategrid(argv);
	if (solver(grid, 0, 0) == 1)
        print(grid);
    else
        ft_putstr("No solution exists\n");
    return (0);
}

//test argv
// ".136578.." "8.5319.64" "967.2..3." "594...3.." "7.2...6.." "186..3592" "671...4.." "..9...2.6" "...53.9.."
