/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:07:02 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/29 18:54:44 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/* static void esempio_funzione(unsigned int indice, char *carattere)
{
    printf("Indice: %u, Carattere: %c\n", indice, *carattere);
}

int main(void)
{
    char str[] = "Ciaoos!";
    ft_striteri(str, esempio_funzione);
    
    return 0;
} */