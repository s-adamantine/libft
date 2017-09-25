/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadamant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 21:30:10 by sadamant          #+#    #+#             */
/*   Updated: 2017/09/24 21:56:21 by sadamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*mapped;

	mapped = ft_lstnew(NULL, 0);
	while (lst)
	{
		mapped->next = ft_lstnew(f(lst), lst->content_size);
	}
	return (mapped);
}
