/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:39:18 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/26 14:50:57 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int main(void) {
    const char *primo_string = "pasta coi broccoly e";
   const char *secondo_string = " arrosto panato" ;
   char *pranzo_str = ft_strjoin(primo_string, secondo_string);
   if (pranzo_str) {
        printf("Pranzo: %s\n", pranzo_str);
        free(pranzo_str);
    } else {
        printf("Error, stai a digiuno\n");
    }
   
}  */
//expected output
//Pranzo: pasta coi broccoly e arrosto panato
/* Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’ */