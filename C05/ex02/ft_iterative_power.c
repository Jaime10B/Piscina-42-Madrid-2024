/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/18 18:19:43 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main(void) {
// 	printf("%d\n", ft_iterative_power(2, 3));  // Salida esperada: 8
// 	printf("%d\n", ft_iterative_power(5, 0));  // Salida esperada: 1
// 	printf("%d\n", ft_iterative_power(2, -2)); // Salida esperada: 0
// 	printf("%d\n", ft_iterative_power(0, 0));  // Salida esperada: 1
// 	printf("%d\n", ft_iterative_power(3, 4));  // Salida esperada: 81
// }