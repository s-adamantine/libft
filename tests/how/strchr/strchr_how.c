/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_how.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:19:27 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/09 16:21:57 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*string = "okay";

	printf("%p\n", string);
	printf("%p\n", strchr(string, 'a'));
	return (0);	
}
