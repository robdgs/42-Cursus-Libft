/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 14:48:10 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/26 15:19:57 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*result;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	result = malloc(length * sizeof(char) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* static char potatoes(unsigned int index, char c)
{
	unsigned int i = index;
	i = 65;
	return (c = i);
}
int main(void)
{
    const char *original_string = "patate, purea di patate";
    char *potatoed_string = ft_strmapi(original_string, &potatoes);
    printf("Stringa originale: %s\n", original_string);
    printf("Nuova stringa: %s\n", potatoed_string);
    free(potatoed_string);
    return 0;
} */