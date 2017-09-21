/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 16:15:26 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/19 16:26:40 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	to_caps(char x)
{
	return (x - 32);
}

int	main(void)
{
	char 	*str = "hi lots of tests";
	char	*result;
	char 	(*f)(char);
	
	f = &to_caps;
	result = ft_strmap(str, f);
	printf("%s\n", str);
	printf("%s\n", result);
	return (0);		
}
