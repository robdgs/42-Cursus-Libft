/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:01:22 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/06 18:40:44 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	newlist = NULL;
	current = lst;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (current != NULL)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		ft_lstadd_back(&newlist, new_node);
		current = current->next;
		if (new_node == NULL)
		{
			ft_lstclear(&newlist, del);
			free(new_content);
			return (NULL);
		}
	}
	return (newlist);
}

/*Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.*/
/* void	*ft_tomap_function(void *content)
{
	char	*original = (char *)content;
	char	*duplicate = ft_strdup(original);
	return ((void *)duplicate);
}
void	ft_del(void *content)
{
	free(content);
}
int main(void)
{
	char	*str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (1);
	str[0] = 'a';
	str[1] = '\0';
	t_list	*nodo = ft_lstnew(str);
	if (!nodo)
	{
		free(str);
		return (1);
	}
	t_list	*map = ft_lstmap(nodo, &ft_tomap_function, ft_del);
	printf("%s\n", (char *)nodo->content);
	printf("%s\n", (char *)map->content);
	ft_lstclear(&map, &ft_del);
	ft_lstclear(&nodo, &ft_del);
} */