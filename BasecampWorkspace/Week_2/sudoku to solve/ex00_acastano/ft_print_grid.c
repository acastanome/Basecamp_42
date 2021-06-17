#include <unistd.h>

void	ft_putchar(char c);

void ft_print_grid(char **arr)
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
