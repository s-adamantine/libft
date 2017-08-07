/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_how.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 07:02:09 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/05 07:14:35 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[47];
	char	*src1 = "i like ";
	char	*src = "pineapples";

	strcat(dest, src1);
	strcat(dest, src);
	printf("%s\n", dest);
	strcat(dest, " and bananas too I guess");
	printf("%s\n", dest);
	return (0);
}
