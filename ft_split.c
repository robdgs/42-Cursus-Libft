/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:59:23 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/06 21:47:23 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static int	ft_size(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

static char	**ft_my_free_split(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	*s_cpy;
	char	**dest;

	j = 0;
	s_cpy = (char *)s;
	if (s == NULL)
		return (NULL);
	dest = malloc((ft_size(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (j < ft_size(s, c) && s_cpy)
	{
		while (*s_cpy == c)
			s_cpy++;
		dest[j] = malloc((ft_len(s_cpy, c) + 1) * sizeof(char));
		if (!dest[j])
			return (ft_my_free_split(dest));
		ft_strlcpy(dest[j], s_cpy, ft_len(s_cpy, c) + 1);
		s_cpy += ft_len(s_cpy, c) + 1;
		j++;
	}
	dest[j] = NULL;
	return (dest);
}

/* int main (void){
	char my_str [] = "chipi chipi chapa chapa dubi dubi daba daba";
	char my_ch = ' ';
	char **result = ft_split(my_str, my_ch);
	printf("%d \n", ft_size(my_str,my_ch));
	if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("Sottostringa numero %d: %s\n", i + 1, result[i]);
            i++;
        }

        ft_my_free_split(result);
    }
    else
    {
        printf("Errore\n");
    }

    return 0;
} */