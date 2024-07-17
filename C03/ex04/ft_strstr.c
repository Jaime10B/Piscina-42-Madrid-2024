/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/17 12:17:05 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <string.h>


int	find_value(char *main_string, char *substring)
{
	int	index;

	index = 0;
	while (substring[index] != '\0')
	{
		if (substring[index] != main_string[index])
			return (0);
		index++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (find_value(str + i, to_find))
				return (str + i);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] = "mejoertertejoreeeee";
// 	char tofind[] = "";
// 	printf("%s\n", ft_strstr(str, tofind));
// 	printf("%s", strstr(str, tofind));
// }