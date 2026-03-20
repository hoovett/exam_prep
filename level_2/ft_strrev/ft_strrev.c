#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int		len;
	char	*rev_str;
	int		i;

	len = str_len(str);
	rev_str = malloc(len + 1);
	len--;
	i = 0;
	while (len >= 0)
		rev_str[i++] = str[len--];
	rev_str[i] = '\0';
	return (rev_str);
}

char	*ref_strrev(const char *str)
{
	int		len;
	char	*rev;
	int		i;

	len = strlen(str);
	rev = malloc(len + 1);
	if (!rev)
		return (NULL);
	for (i = 0; i < len; i++)
		rev[i] = str[len - i - 1];
	rev[len] = '\0';
	return (rev);
}

void	test(char *input)
{
	char	*my;
	char	*ref;

	my = ft_strrev(input);
	ref = ref_strrev(input);
	printf("Input:     \"%s\"\n", input);
	printf("ft_strrev: \"%s\"\n", my);
	printf("ref:       \"%s\"\n", ref);
	if (my && ref && strcmp(my, ref) == 0)
		printf("✅ OK\n");
	else
		printf("❌ Mismatch\n");
	printf("----------------------\n");
	free(my);
	free(ref);
}

/* MAIN */
int	main(void)
{
	// test("hello");
	// test("abcd");
	// test("a");
	// test("");
	// test("123456");
	// test("racecar");
	// test("!@#$");
	printf("%s\n", ft_strrev("Hello"));

	return (0);
}