/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:46:28 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/23 19:22:18 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}

/* int main (void){
char src[] = {'1','2','3','4','5'};
char sc[] = {'1','3'};
printf("%d",ft_memcmp(src,sc, 1));
} */
/*
The memcmp() function returns  an  integer  less  than,  equal  to,  or
greater than zero if the first n bytes of s1 is found, respectively, to
be less than, to match, or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign  of  the
difference  between  the  first  pair of bytes (interpreted as unsigned
char) that differ in s1 and s2
*/