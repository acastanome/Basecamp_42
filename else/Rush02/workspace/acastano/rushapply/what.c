#include <unistd.h>
#include <stdlib.h>

int		main(void)
{
	int i;
	int len;
	char *str;

	i = 0;
	len = 5;
	str = (char*)malloc(sizeof(char) * len);
	if (!str)
	{
		write(1, "malloc fail", 11);
		return (0);
	}
	while (i < len)
	{
		str[i] = 'c';
		i++;
	}
	str[len-1] = '\0';
	write(1, str, len);
	//str = rush(x, y, str);
	//free(str);
	return (0);
}