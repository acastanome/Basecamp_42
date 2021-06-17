#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
	char c1;

	char c2;

	c1 = '0';
	c2 = '0';
	while (c2 <= '9')
	{
		while (c1 <= '9')
		{
			ft_putchar(c1);
			ft_putchar(c2);
			ft_putchar('\n');
			b++;
		}
		c++;
	}
}