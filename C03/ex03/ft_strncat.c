/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/10 19:25:17 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		counter_src;
	unsigned int		counter_dest;
	
	counter_src = 0;
	counter_dest = 0;
	while (dest[counter_dest])
		counter_dest++;
	while(src[counter_src] && (counter_src < nb))
	{
		dest[counter_dest + counter_src] = src[counter_src];
		counter_src++;
	}
	dest[counter_dest + counter_src] = '\0';
	return(dest);
}

// int main(void)
// {
// 	char *src = "Holaaaa";
// 	char dest[20] = "Mami ";
// 	printf("%s", ft_strncat(dest, src, 9));
// }