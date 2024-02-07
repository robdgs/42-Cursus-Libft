/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:15:54 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/04 16:30:43 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/* int main(void) {
   
	t_list *first_node = ft_lstnew("primo");
	t_list *second_node = ft_lstnew("secondo agggiunto");
    t_list *my_list = first_node;

    printf("Lista originale:\n");
    while (my_list != NULL) {
        printf("%s -> ", (char *)my_list->content);
        my_list = my_list->next;
    }
    printf("NULL\n");

    t_list *new_node = ft_lstnew("terzo aggiunto");
	
	ft_lstadd_back(&first_node, second_node);
    ft_lstadd_back(&first_node, new_node);
	
    printf("\nLista dopo l'aggiunta dei nuovi elementi:\n");
    my_list = first_node;
    while (my_list != NULL) {
        printf("%s -> ", (char *)my_list->content);
        my_list = my_list->next;
    }
    printf("NULL\n");

    my_list = first_node;
    while (my_list != NULL) {
        t_list *temp = my_list;
        my_list = my_list->next;
        free(temp);
    } 
} */