#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*new;
	char	**array;

	array = NULL;
	ft_strcpy(new, "this is the new sentence");
	array = ft_arrpush(array, new);
	printf("%s\n", array[0]);
	ft_strcpy(new, "second sentence");
	printf("pushing the second array...\n");
	array = ft_arrpush(array, new);
	//printf("%s\n", array[0]);
//	printf("%s\n", array[1]);
	return (0);
}
