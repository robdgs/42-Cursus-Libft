/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:54:20 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/22 17:11:35 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

//The strrchr() function returns a pointer to the last occurrence of  the
//character c in the string s.
/*int main() {

	const char *testString = "Wow Hello, World! AbracadabrA";
    char searchChar = 'W';

    char *result = ft_strrchr(testString, searchChar);

    if (result != NULL) {
        printf("char '%c' posiz %ld.\n", searchChar, result - testString);
    } else {
        printf("char '%c' non trovato \n", searchChar);
    }
	printf("%s \n", result);
    return 0;
}*/
// expected output 
//char 'W' posiz 11.
//World! AbracadabrA 