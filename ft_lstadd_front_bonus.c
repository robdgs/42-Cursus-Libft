/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:53:39 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/04 16:27:46 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main(void) {
   
	t_list *first_node = ft_lstnew("aa");
	t_list *second_node = ft_lstnew("bbb");
    t_list *my_list = first_node;

    printf("Lista originale:\n");
    while (my_list != NULL) {
        printf("%s -> ", (char *)my_list->content);
        my_list = my_list->next;
    }
    printf("NULL\n");

    t_list *new_node = ft_lstnew("cccc");
	
	ft_lstadd_front(&first_node, second_node);
    ft_lstadd_front(&first_node, new_node);
	
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
/* lst: The address of a pointer to the first link of
	 a list.
new: The address of a pointer to the node to be
	 added to the list. */
/*
Controlla se il puntatore alla lista o il puntatore al nuovo elemento è nullo
	 if (!lst || !new)
        return;
Imposta il campo "next" del nuovo elemento per puntare 
all'attuale inizio della lista
    new->next = *lst;
Modifica il puntatore alla lista in modo che punti al nuovo elemento,
 rendendolo l'inizio della lista
    *lst = new; 
*/