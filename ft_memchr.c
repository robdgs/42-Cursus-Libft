/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:58:12 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/22 19:20:28 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*int main()
{
    const void  *s = "ABFDEF";
    int c = 68;
    size_t  n = 6;
    char    *sn;

    sn = ft_memchr(s, c, n);
    printf("Result: %s\n", sn);
    return (0);
}*/
/*Questa funzione cerca il primo byte uguale a c (interpretato come un byte
senza segno) nei primi n bytes dell'area di memoria puntata da s.

    s: Puntatore all'area di memoria in cui eseguire la ricerca.
    c: Valore da cercare (come byte senza segno).
    n: Numero di bytes da esaminare.

La funzione restituisce un puntatore al primo byte trovato uguale a c 
all'interno dell'area di memoria specificata, oppure restituisce NULL 
se il byte non viene trovato nei primi n bytes.*/