/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:00:58 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/25 21:37:07 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

/* int main(void)
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    
    int *arr = (int *)ft_calloc(nmemb, size);

    if (arr != NULL)
    {
        printf("Memory allocated successfully.\n");
        for (size_t i = 0; i < nmemb; ++i)
        {
            printf("%d ", arr[i]);
        }
        free(arr); // Ricordati di deallocare la memoria quando hai finito
    }
    else
    {
        printf("Errore durante l'allocazione di memoria.\n");
    }
} */
/* La funzione calloc() alloca memoria per un array di nmemb elementi,ciascuno
della dimensione di size byte, e restituisce un puntatore alla memoria
allocata. La memoria è impostata a zero. Se nmemb o size è 0, allora calloc()
restituisce o NULL o un valore di puntatore unico che successivamente può
essere passato con successo a free(). Se la moltiplicazione di nmemb e size
causasse un overflow di interi, allora calloc() restituisce un errore.
Al contrario, un overflow di interi non sarebbe rilevato nella successiva
chiamata a malloc(), con il risultato che un blocco di memoria di dimensioni
errate verrebbe allocato:
malloc(nmemb * size); */