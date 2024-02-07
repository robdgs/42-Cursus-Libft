/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:22:06 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/19 16:58:04 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

//The  memset()  function  fills  the  first  n  bytes of the memory area
//pointed to by s with the constant byte c.
//i<n per assicurarmi di avere abbastanza memoria
/*#include <string.h>
int main(void)
{
	char str[50] = {}; //se qui non inizializzo, il primo puts (se tolgo  
	//lo strcpy) invece di "   " mi stampa la spazzatura che
	//c'era prima in memoria tipo �;�
	strcpy(str, "ridi che mamma ha fatto gli gnocchi");
	puts(str); //stampa la stringa non modificata
	ft_memset(str, '$', 5);
	puts(str); //stampa la stringa modificata
	return (0);
}*/
/*
void	*ft_memset(void *s, int c, size_t n)
tutte le funzioni che operano su memoria hanno puntatori void passati come
parametri perche' cosi' sono generiche e io posso castare il puntatore secondo
le mie necessita', che sia un array di char o di int o di qualsiasi altra cosa
*/