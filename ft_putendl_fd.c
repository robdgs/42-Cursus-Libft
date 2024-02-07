/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:46:30 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/26 15:54:03 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* int main(void)
{
    char *message = "Ricchi e Poveri FantaSanremo"; 
	char *messageone = "claudio bisio";
    int fd = 1;
    ft_putendl_fd(message, fd);
	ft_putendl_fd(messageone, fd);
} */
//compile:
//cc -Wall -Wextra -Werror ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c