/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:20:27 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/03 20:35:09 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int main (void){
	
	t_list *first_node = ft_lstnew("aaa");
	t_list *second_node = ft_lstnew("bbb");
	
	first_node->next = second_node;
	t_list *last_node = ft_lstlast(first_node);
	printf("Ultimo elemento: %s \n",(char *)last_node->content);

	free(first_node);
	free(second_node);
} */