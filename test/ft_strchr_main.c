/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:44:18 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/05 18:15:25 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
//	char *strresult = ft_strchr(argv[1], argv[2][0]);
	const char *meh = "okay";
	
	printf("%p\n", argv[1]);
	printf("the address of the string is: %p\n", argv[1]);
//	printf("%p\n", strresult);	
	return (0);
}
