/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/09 14:04:36 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		contador;

	ft_strlowcase(str);
	contador = 0;
	while (str[contador])
	{
		if ((contador == 0)
			|| (!(str[contador - 1] >= 'a' && str[contador - 1] <= 'z')
				&& !(str[contador - 1] >= 'A' && str[contador - 1] <= 'Z')
				&& !(str[contador - 1] >= '0' && str[contador - 1] <= '9')))
		{
			if (str[contador] >= 'a' && str[contador] <= 'z')
				str[contador] = str[contador] - 32;
		}
		contador++;
	}
	return (str);
}

// int main(void)
// {
// 	char str1[] = "a aaAAAAA   iuui322a";
//     char str2[] = "Ad dsD";

//     printf("%s\n", ft_strcapitalize(str1));
//     printf("%s\n", ft_strcapitalize(str2));
//     printf("%s\n", ft_strcapitalize(str3));

// 	return 0;
// }