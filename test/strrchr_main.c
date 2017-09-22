#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s\n", strchr(argv[1], atoi(argv[2])));
	printf("%s\n", ft_strchr(argv[1], atoi(argv[2])));
	return (0);
}
