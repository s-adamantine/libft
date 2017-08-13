/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:58:17 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/07 11:07:12 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str = argv[1];

	printf("%s\n", str);
	printf("%zu\n", ft_strlen(str));
	ft_strclr(str);
	printf("%zu\n", ft_strlen(str));
	printf("-%s\n", str);
	return (0);
}
