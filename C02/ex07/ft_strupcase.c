/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/08 19:28:28 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strupcase(char *str)
{
	int		contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] >= 'a' && str[contador] <= 'z')
			str[contador] = str[contador] - 32;
		contador++;
	}
	return (str);
}

// int main(void)
// {
// 	char str1[] = "aaaaaaaa";
//     char str2[] = "AddsD";
//     char str3[] = "";

//     printf("%s\n", ft_strupcase(str1));
//     printf("%s\n", ft_strupcase(str2));
//     printf("%s\n", ft_strupcase(str3));
// }