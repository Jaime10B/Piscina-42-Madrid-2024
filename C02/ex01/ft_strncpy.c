/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/08 17:28:32 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		len;

	len = 0;
	while (len < n)
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}

// int main(void)
// {
//     char c1[] ="hola";
//     char c2[] = "";
// 	unsigned int 	n = sizeof(c1);
//     ft_strncpy(c2,c1,n);

//     char  c;

//     for (int i=0;i<5; i++)
//     {
//         c = c2[i];
//         write(1,&c,1);
//     }
// }