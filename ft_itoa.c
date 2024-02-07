/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:42:43 by rd-agost          #+#    #+#             */
/*   Updated: 2024/02/06 19:18:12 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	else if (n < 10)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = count_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i - 1] = n + '0';
	return (str);
}

/* int main(void) {
    int num1 = 12345;
    int num2 = -6789;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("Number: %d, String: %s\n", num1, str1);
    printf("Number: %d, String: %s\n", num2, str2);
    printf("Number: %d, String: %s\n", num3, str3);

    free(str1);
    free(str2);
    free(str3);
} */
/*itoa allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/