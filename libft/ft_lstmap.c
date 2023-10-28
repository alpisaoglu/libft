/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:42:14 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/28 13:42:15 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*result_lst;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	result_lst = 0;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&result_lst, del);
			return (0);
		}
		ft_lstadd_back(&result_lst, node);
		lst = lst->next;
	}
	return (result_lst);
}
