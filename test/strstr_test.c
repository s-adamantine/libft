#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s\n", strstr(argv[1], argv[2], (size_t)atoi(argv[3])));
	printf("%s\n", ft_strstr(argv[1], argv[2], (size_t)atoi(argv[3])));
	return (0);
}
