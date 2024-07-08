/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/08 19:30:15 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int		contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[contador] >= 'A' && str[contador] <= 'Z')
			str[contador] = str[contador] + 32;
		contador++;
	}
	return (str);
}

// int main(void)
// {
// 	char str1[] = "aaaAAAAA";
//     char str2[] = "AddsD";
//     char str3[] = "";

//     printf("%s\n", ft_strlowcase(str1));
//     printf("%s\n", ft_strlowcase(str2));
//     printf("%s\n", ft_strlowcase(str3));

// }