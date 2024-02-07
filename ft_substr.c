/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rd-agost <rd-agost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:29:01 by rd-agost          #+#    #+#             */
/*   Updated: 2024/01/26 13:26:58 by rd-agost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start <= slen)
		finish = slen - start;
	if (start > slen)
		return (ft_calloc(1, 1));
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * finish + 1);
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}

/* int main(void) {
    const char *input_string = "pasta coi broccoly";
    unsigned int start_index = 10;
    size_t substring_length = 8;
    char *result = ft_substr(input_string, start_index, substring_length);
    if (result) {
        printf("Substringaaaaaah: %s\n", result);
        free(result);
    } else {
        printf("Error\n");
    }
} */
/*
to execute 
cc -Wall -Wextra -Werror ft_substr.c ft_calloc.c ft_strlen.c 
ft_strlcpy.c ft_bzero.c
*/
/* char	*new; puntatore alla nuova sottostringa
	size_t	slen; lunghezza stringa di input
	size_t	finish; determina la lem effettiva della substring da estrarre. */
/*
alla riga 28 invece di usare il calloc potevo sostituire quel return con
new = malloc(1);
	new[0]='\0';
	return (new);
devo allocare e non basta solo return di stringa vuota lol rip
*/
//s + start RICORDAH vuol dire che s punta dalla posizione start in poi
/* Questa funzione estrae una sottostringa da una stringa di input,
specificando l'indice di partenza e la lunghezza massima della sottostringa.
La memoria per la sottostringa è allocata dinamicamente e restituita come
risultato della funzione. */
/* Prende tre argomenti:
s: 		Puntatore alla stringa di input dalla quale si desidera estrarre 
   		la sottostringa.
start:  indice di partenza da cui iniziare l'estrazione della sottostringa.
len: 	Lunghezza massima della sottostringa da estrarre. */