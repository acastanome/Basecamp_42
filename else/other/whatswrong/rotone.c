#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (0);
}

int rotone_main(int argc, char **argv)
{
	int i;
	char c;
	int l;

	i = 0;
	c = '\n';
	l = len(argv[0]);

	char str[l];

	while (argv[0][i] != '\0')
	{
		*(str + 1) = argv[0][i];
		i++;
	}
	str[i] = '\0';
	i = 0;
	if (argc == 1)
	{
		while (str[i] != '\0')
		{
			if (((str[i] >= 'a') && (str[i] <'z')) || ((str[i] >= 'A') && (str[i] <'Z')))
			{
				*(str + 1) == *(str + 1) + 1;
			}
			else if ((str[i] == 'z') || (str[i] == 'Z'))
			{
				*(str + 1) == *(str + 1) - 25;
			}
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, &c, 1);
	return (0);
}