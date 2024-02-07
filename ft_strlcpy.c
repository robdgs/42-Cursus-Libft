/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:01:15 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/23 11:59:08 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*int    main(void)
{
    char dst[100] = "HelloWorld!";
    char src[12] = "teststring";
    int dstsize = 100;
    printf("mine : %zu\n", ft_strlcpy(dst, src, dstsize));
    printf("%s\n", dst);
    return (0);
}*/
/*
DESCRIPTION:
 	The strlcpy() and strlcat() functions copy and concatenate strings
	respectively.  They are designed to be safer, more consistent, and less
	error prone replacements for strncpy(3) and strncat(3).  Unlike those
	functions, strlcpy() and strlcat() take the full size of the buffer (not
	just the length) and guarantee to NUL-terminate the result (as long as
	size is larger than 0 or, in the case of strlcat(), as long as there is
	at least one byte free in dest).  Note that you should include a byte for
	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
	nated and for strlcat() both src and dest must be NUL-terminated.
 	The strlcpy() function copies up to size - 1 characters from the NUL-
	terminated string src to dest, NUL-terminating the result.

	La funzione restituisce il numero di caratteri che avrebbe copiato senza
	includere il carattere di terminazione della stringa ('\0'). Questo valore
	può essere utilizzato per verificare se si è verificato un troncamento
	(se è maggiore o uguale a size), ma in ogni caso la stringa di destinazione
	sarà sempre terminata con '\0'.
*/