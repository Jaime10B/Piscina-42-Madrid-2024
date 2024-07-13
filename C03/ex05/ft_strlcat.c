/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/11 17:38:47 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	len_dest = 0;
	len_src = 0;
	i = 0;
	j = 0;
	while (dest[len_dest] && len_dest < size)
		len_dest++;
	while (src[len_src])
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

// int main(void)
// {
// 	char dest[20] = "Hola";
// 	char src[] = "Mundo";
// 	unsigned int n = 6;

// 	printf("Longitud resultante: %u\n", ft_strlcat(dest, src, n));
// 	printf("Cadena resultante: %s\n", dest);

// 	return 0;
// }