/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/12 14:09:17 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*avoid_morethan25lines_error(char *str, char *to_find,
	int len_tofind, int len_finded)
{
	int		counter;

	counter = 0;
	while (to_find[len_tofind])
		len_tofind++;
	if (len_tofind == 0)
		return (&str[0]);
	while (str[counter])
	{
		if (str[counter] == to_find[len_finded])
		{
			if (len_tofind -1 == len_finded
				&& str[counter - 1] == to_find[len_finded -1])
				return (&str[counter - len_finded]);
			else
				len_finded++;
		}
		else
			len_finded = 0;
		counter++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		len_tofind;
	int		len_finded;

	len_tofind = 0;
	len_finded = 0;
	return (avoid_morethan25lines_error(str,
			to_find, len_tofind, len_finded));
}

// int main(void)
// {
// 	char str[] = "mejoertertejoreeeee";
// 	char tofind[] = "jor";
// 	printf("%s", ft_strstr(str, tofind));
// }