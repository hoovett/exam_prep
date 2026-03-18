#include <stdlib.h>
#include <unistd.h>

int	snake_len(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 0)
			len++;
		len++;
		i++;
	}
	return (len);
}

char	*camel_to_snake(char *str)
{
	int		i;
	int		j;
	char	*snake;

	i = 0;
	j = 0;
	snake = malloc(snake_len(str) + 1);
	if (!snake)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0)
				snake[j++] = '_';
			snake[j] = str[i] + 32;
		}
		else
			snake[j] = str[i];
		i++;
		j++;
	}
	snake[j] = '\0';
	return (snake);
}

int	main(int argc, char *argv[])
{
	int	len;

	if (argc == 2)
	{
		len = snake_len(argv[1]);
		write(1, camel_to_snake(argv[1]), len);
	}
	return (0);
}
