/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:21:39 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/26 15:41:44 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

/* int main(void)
{
    int number = -12345;
	int fd = 1;
	int numberdos= 5737878;
	int numbertres= -2147483648;
	int numberquattro= 42;
    ft_putnbr_fd(number, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(numberdos, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(numbertres, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(numberquattro, fd);
	write(fd, "\n", 1);
} */