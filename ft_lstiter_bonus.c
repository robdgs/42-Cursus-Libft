/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:45:22 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/06 17:59:49 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	if (!lst)
		return ;
	list_ptr = lst;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}

/* void ft_print_function(void *content)
{
    printf("Contenuto: %s\n", (char *)content);
}
int main(void)
{
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");

	t_list *nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);

	ft_lstiter(nuova_lista, ft_print_function);
	free(nodo1);
	free(nodo2);
	free(nodo3);
} */