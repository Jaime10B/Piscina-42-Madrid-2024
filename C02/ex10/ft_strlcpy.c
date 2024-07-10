/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/10 14:17:11 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		counter;
	unsigned int		lengh;

	counter = 0;
	lengh = 0;
	if (size != 0)
	{
		while (counter < size -1 && src[counter] != '\0')
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	while (src[lengh])
	{
		lengh++;
	}
	return (lengh);
}

// int main(void)
// {
// 	char dest[10];
// 	char *src;
// 	unsigned int size;

// 	size = sizeof(src);
// 	src = "Hola !";
// 	printf("%d", ft_strlcpy(dest, src, size));
// }