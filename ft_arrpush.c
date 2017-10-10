/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 16:40:11 by sadamant          #+#    #+#             */
/*   Updated: 2017/10/09 16:40:13 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_arrpush(char **array, char *new)
{
	int		i;
    int     length;
    char    **expanded;

	i = 0;
    length = 0;
	if (!array)
	{
		expanded = (char **)malloc(sizeof(char *) * 1);
		expanded[0] = (char *)malloc(sizeof(char) * (ft_strlen(new) + 1));
		ft_strcpy(expanded[0], new);
		return (expanded);
	}
	printf("here\n");
    if (array[i] != NULL)
    {
		printf("%s\n", array[i]);
		i++;
	}
//	printf("%d\n", length);
    // expanded = (char **)malloc(sizeof(char *) * (length + 1));
	// while (*array)
	// {
	// 	*expanded++ = *array++;
	// }
	// *expanded = new;
	return (NULL);
}
