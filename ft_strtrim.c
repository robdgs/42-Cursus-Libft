/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:58:28 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/26 14:49:56 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new_str = (char *)malloc((size + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, (char *)s1, size + 1);
	return (new_str);
}

/* int main(void) {
    const char *input_string = "     Hello,World!H   ";
    const char *trim_set = " H";
    char *trimmed_string = ft_strtrim(input_string, trim_set);
    if (trimmed_string) {
        printf("Stringa originale: \"%s\"\n", input_string);
        printf("Stringa trimmata: \"%s\"\n", trimmed_string);
        free(trimmed_string);
    } else {
        // Errore durante l'allocazione di memoria
        printf("Errore durante l'allocazione di memoria.\n");
    }
} */
/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string */
/*
strtrim rimuove i caratteri iniziali e finali da una stringa (s1)
in base a un insieme specificato di caratteri (set). La
funzione di trimming consiste nel rimuovere eventuali caratteri
dall'inizio e dalla fine della stringa che corrispondono a qualsiasi
carattere nell'insieme specificato
*/
/*
cc -Wall -Wextra -Werror ft_strtrim.c ft_strlen.c ft_strlcpy.c
*/