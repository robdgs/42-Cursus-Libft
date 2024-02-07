/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 00:33:40 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/25 12:09:38 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*int main (void)
{
	const char *testString = "Hello, World! AbracadabrA";
    char searchChar = 'W';

    char *result = ft_strchr(testString, searchChar);

    if (result != NULL) {
        printf("char '%c' posiz %ld.\n", searchChar, result - testString);
    } else {
        printf("char '%c' non trovato \n", searchChar);
    }
	printf("%s \n", result);
    return 0;
}*/
/*
The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the func-
tions locate the terminating `\0'.
Here "character" means "byte"; these functions do not work with wide or
multibyte characters.
*/
