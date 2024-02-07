/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:16:21 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/23 17:40:00 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
The  bzero()  function  erases  the  data  in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes  
containing '\0') to that area.
*/

/*int main (void)
{
	char str[50] = {"voglio dare testate al muro"}; 
	puts(str); //stampa la stringa non modificata
	ft_bzero(str+2, sizeof(str));
	puts(str); //stampa la stringa modificata
	return (0);
}*/