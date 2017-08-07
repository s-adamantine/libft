/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 17:24:33 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/05 06:30:57 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	if (ft_strlen(dst) < ft_strlen(src))
		ft_puterr("Abort trap: 6");
	while (*src)
		*dst++ = *src++;
	return (dst);
}
