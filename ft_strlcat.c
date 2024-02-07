/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 23:40:25 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/23 13:10:46 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*
La funzione strlcat è una funzione di manipolazione
delle stringhe in linguaggio C. Questa funzione è progettata 
per concatenare due stringhe, simile alla funzione
strcat, ma con una differenza importante: strlcat 
tiene conto della dimensione
del buffer di destinazione per evitare buffer overflow.
*/
/*int main() {
    char dest[20] = "Hello, ";  
    const char *src = "world!";  
    size_t size = sizeof(dest);  
    size_t result = ft_strlcat(dest, src, size);
    printf("Stringa risultante: %s\n", dest);
    printf("Lunghezza totale: %zu\n", result);

    return 0;
}*/