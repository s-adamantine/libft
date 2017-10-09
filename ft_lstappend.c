/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 13:48:34 by sadamant          #+#    #+#             */
/*   Updated: 2017/10/05 18:46:11 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstappend(t_list *list, t_list *new)
{
    t_list  *cur;

	cur = list;
	if (list->content == NULL)
        return (new);
	while (cur->next)
    {
        cur = cur->next;
    }
    cur->next = new;
    return (list);
}
