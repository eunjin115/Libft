/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjikim <eunjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 10:01:05 by eunjikim          #+#    #+#             */
/*   Updated: 2020/12/29 11:59:55 by eunjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	t_list	*new;
	
	if (!lst || !f || !del)
		return (NULL);
	head = 0;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (new == 0)
		{
			while (head != 0)
			{
				del(head->content);
				head = head->next;
			}
			return (NULL);
		}
		if (head == 0)
			head = new;
		else
			current->next = new;
		current = new;
		lst = lst->next;
	}
	return (head);
}
