/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:53:27 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/25 18:17:17 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[h] != '\0')
	{
		n = 0;
		while (big[h + n] == little[n] && (h + n) < len)
		{
			if (big[h + n] == '\0' && little[n] == '\0')
				return ((char *)&big[h]);
			n++;
		}
		if (little[n] == '\0')
			return ((char *)big + h);
		h++;
	}
	return (0);
}

/* questa funzione cerca la prima occorrenza della sottostringa little
all'interno della stringa più lunga big, considerando 
al massimo len caratteri. */
/* int main(void)
{
    const char *haystack = "Hello, aiuto World Aiuto aa!";
    const char *needle = "World";
    size_t len = 50;
    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL)
    {
        printf("substr presenteh: %s\n", result);
    }
    else
    {
        printf("not found\n");
    }
    return 0;
} */