/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:48:30 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/25 21:51:25 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
    char character_to_write = 'A';
    int file_descriptor = 1; 
	// 1 rappresenta il file descriptor dello standard output (stdout)
    ft_putchar_fd(character_to_write, file_descriptor);
} */