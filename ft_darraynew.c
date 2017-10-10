/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darraynew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 16:52:59 by sadamant          #+#    #+#             */
/*   Updated: 2017/10/10 12:38:07 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_darraynew(int i, int j)
{
	int		n;
	char	**darray;

	n = 0;
	darray = ft_memalloc(i);
	while (n < i)
	{
		darray[n++] = ft_memalloc(j);
	}
	return (darray);
}
