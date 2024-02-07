/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:31:44 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/03 20:01:03 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*node;

	node = lst;
	count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}

/* int main (void){
	
	t_list *first_node = ft_lstnew("aaa");
	t_list *second_node = ft_lstnew("bbb");
	
	first_node->next = second_node;
	
	printf("%d \n", ft_lstsize(first_node));

	free(first_node);
	free(second_node);
} */
