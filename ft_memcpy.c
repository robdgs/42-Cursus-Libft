/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:45:25 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/23 20:34:10 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* int main  (void)
{
char src[] = {'1','2','3','4','5'};
char scr[] = "aiutissim";
char dest[sizeof(src)] = {};
char sdest[sizeof(scr)] = {};
//ft_memcpy(dest, src, sizeof(src));
//puts(dest);
ft_memcpy(dest, src, 4);
ft_memcpy(sdest, scr, 5);
puts(dest);
puts(sdest);
} */
/*
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.
*/