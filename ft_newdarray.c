/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newdarray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:52:59 by sadamant          #+#    #+#             */
/*   Updated: 2017/10/05 18:24:46 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_newdarray(int i, int j)
{
	int		n;
	char	**darray;

	n = 0;
	darray = (char **)malloc(sizeof(char *)*i);
	while (n < i)
	{
		darray[n++] = (char *)malloc(sizeof(char) * j);
	}
	return (darray);
}
