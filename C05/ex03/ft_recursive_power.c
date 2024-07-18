/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/18 18:20:07 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
// int main(void) {
// 	printf("%d\n", ft_recursive_power(2, 3));  // Salida esperada: 8
// 	printf("%d\n", ft_recursive_power(5, 0));  // Salida esperada: 1
// 	printf("%d\n", ft_recursive_power(2, -2)); // Salida esperada: 0
// 	printf("%d\n", ft_recursive_power(0, 0));  // Salida esperada: 1
// 	printf("%d\n", ft_recursive_power(3, 4));  // Salida esperada: 81
// }