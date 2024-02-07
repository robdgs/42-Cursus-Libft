/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:20:52 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/25 19:59:51 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

/* int main (void)
{
	const char *str_uan = "12345";
    const char *str_dos = "-6789";
    const char *str_tres = "   42 is sembraeh the answer";
    const char *str_quatro = "inval1d123";
	const char *str_scinque = "-2147483648";

    printf("atoi result for '%s': %d\n", str_uan, ft_atoi(str_uan));
    printf("atoi result for '%s': %d\n", str_dos, ft_atoi(str_dos));
    printf("atoi result for '%s': %d\n", str_tres, ft_atoi(str_tres));
    printf("atoi result for '%s': %d\n", str_quatro, ft_atoi(str_quatro));
    printf("atoi result for '%s': %d\n", str_scinque, ft_atoi(str_scinque));
    return 0;
} */
/* expected output 
atoi result for '12345': 12345
atoi result for '-6789': -6789
atoi result for '   42 is sembraeh the answer': 42
atoi result for 'inval1d123': 0
atoi result for '-2147483648': -2147483648 */