/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:00:41 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/25 21:00:13 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char	*src)
{
	int		c;
	char	*dest;

	c = 0;
	while (src[c] != '\0')
		c++;
	dest = (char *)malloc (c * sizeof (char) + 1);
	if (!dest)
		return (NULL);
	dest[c] = 0;
	while (c >= 0)
	{
		dest[c] = src [c];
		c--;
	}
	return (dest);
}

/* int main(void)
{
    char original[] = "ti prego funziona grazie tvb!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);
        free(duplicate); // Ricordati di deallocare la memoriaaa alla fin
    }
    else
    {
        printf("Errore durante l'allocazione di memoria.\n");
    }
 return 0;
} */
/* expected output 
Original string: ti prego funziona grazie tvb!
Duplicate string: ti prego funziona grazie tvb! */