/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/10 13:48:29 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		counter;
	unsigned int		len_src;

	counter = 0;
	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	while (counter < n)
	{
		if (counter >= len_src)
			dest[counter] = '\0';
		else
			dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}

int main(void)
{
    char c1[] ="hola";
    char c2[] = "";
	unsigned int 	n = 7;
    ft_strncpy(c2,c1,n);

    char  c;

    for (int i=0;i<5; i++)
    {
        c = c2[i];
        write(1,&c,1);
    }
}