#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "      remove the whitespaces!     ";
	printf("%s\n%st\n", str, ft_strtrim(str));
	return (0);
}
