/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/08 15:57:11 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

// int main(void)
// {
//     printf("%d\n", ft_str_is_numeric("qwe")); // Debería imprimir 0
//     printf("%d\n", ft_str_is_numeric("qwe123")); // Debería imprimir 0
//     printf("%d\n", ft_str_is_numeric("")); // Debería imprimir 1
// 	printf("%d\n", ft_str_is_numeric("21443")); // Debería imprimir 1
//     return 0;
// }