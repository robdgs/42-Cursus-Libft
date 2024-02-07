/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:39:48 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/04 20:22:05 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}

/* void ft_del(void *content)
{
    free(content);
}
int main()
{
    t_list *nodo1 = ft_lstnew(ft_strdup("Primo nodo"));
    t_list *nodo2 = ft_lstnew(ft_strdup("Secondo nodo"));
    t_list *nodo3 = ft_lstnew(ft_strdup("Terzo nodo"));

    t_list *nuova_lista = NULL;

    ft_lstadd_back(&nuova_lista, nodo1);
    ft_lstadd_back(&nuova_lista, nodo2);
    ft_lstadd_back(&nuova_lista, nodo3);

    printf("Lista prima:\n");
    t_list *lista = nuova_lista;
    while (lista != NULL)
    {
        printf("%s\n", (char *)lista->content);
        lista = lista->next;
    }

    ft_lstclear(&nuova_lista, ft_del);

    printf("Lista dopo:\n");
    lista = nuova_lista;
    while (lista != NULL)
    {
        printf("%s\n", (char *)lista->content);
        lista = lista->next;
    }
    if (lista == NULL)
     printf("lista vuota finalmente dopo milioni di try ");
} */