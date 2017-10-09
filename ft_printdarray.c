#include "libft.h"

void ft_putdarray(char **array)
{
	while (*array++)
	{
		ft_putstr(*array);
	}
}
