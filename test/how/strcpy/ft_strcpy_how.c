/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_how.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:24:54 by sadamant          #+#    #+#             */
/*   Updated: 2017/08/05 18:56:04 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strcpy example */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

int main ()
{
  char str1[]="This is a test though.";
  char str2[23];
  char str3[40];
	printf("%c\n", str1[22]);
	printf("%d\n", ft_strlen(str1));
	strcpy (str2,str1);
	printf("%d\n", ft_strlen(str2));
	strcpy (str3,"copy successful");
	printf("str1: %s\nstr2: %s\n", str1, str2);
//	printf("address of str1: %p\n", &str1);
//	printf("address of str2: %p\n", &str2);
//  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}
