/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_how.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:10:10 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/12 15:20:14 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello";;
	void	*strcpy;

	memset(str, 'a', 3);
	printf("%s\n%s\n", str, strcpy);
	return (0);
}
