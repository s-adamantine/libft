/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_how.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 07:02:09 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/13 22:36:27 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[9];
	char	*src1 = "i like ";
	char	*src = "pineapples";

	printf("%d\n", dest[0]);
	strcat(dest, src1);
//	strcat(dest, src);
	printf("%d\n", dest[8]);
	printf("%lu\n%lu\n%s\n", strlen(src1), strlen(dest), dest);
//	strcat(dest, " and bananas too I guess");
//	printf("%s\n", dest);
	return (0);
}
