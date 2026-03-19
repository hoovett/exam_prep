#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int len = str_len(str);
	char *rev_str = malloc(len + 1);
	int i = 0;
	len--;

	while (len >= 0)
		rev_str[i++] = str[len--];

	rev_str[i] = '\0';
	return (rev_str);
}