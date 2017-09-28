/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 16:09:02 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/28 16:33:14 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src = "zthecakeialie!\0I'm hidden lol\r\n";
	
	printf("%s\n", strrchr(src, 'z'));
	printf("%s\n", ft_strrchr(src, 'z'));
	return (0);
}
