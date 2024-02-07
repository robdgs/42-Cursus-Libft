/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:38:43 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/04 19:32:38 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

/* void del(void *content)
{
        free (content);
}

 int	main(void)
{
    t_list *lista = NULL;
	
    char *str1 = ft_strdup("elemento");

    t_list *nodo_uno = ft_lstnew(str1);

    ft_lstadd_back(&lista, nodo_uno);
	
	printf("%s\n", (char *)lista->content);
    ft_lstdelone(nodo_uno, del);
    printf("%snodo teoricamente vuotpo\n", (char *)nodo_uno->content);
}  */