/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/09 14:05:36 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		counter;
	unsigned int		lengh;

	counter = 0;
	lengh = 0;
	while (counter < size)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter - 1] = '\0';
	while (*src)
	{
		lengh++;
		src++;
	}
	return (lengh);
}
