#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	do_op(int a1, char sign, int a2)
{
	int	result;

	result = 0;
	if (sign == '*')
		result = a1 * a2;
	else if (sign == '+')
		result = a1 + a2;
	else if (sign == '-')
		result = a1 - a2;
	else if (sign == '/')
		result = a1 / a2;
	else if (sign == '%')
		result = a1 % a2;
	return (result);
}

int	main(int argc, char const *argv[])
{
	int	a1;
	int	a2;

	if (argc == 4)
	{
		a1 = atoi(argv[1]);
		a2 = atoi(argv[3]);
		printf("%d", do_op(a1, argv[2][0], a2));
	}
	printf("\n");
	return (0);
}
