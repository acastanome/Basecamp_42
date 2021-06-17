#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
