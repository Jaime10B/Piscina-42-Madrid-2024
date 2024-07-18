/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/18 18:20:28 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int		sqrt;

	sqrt = 0;
	while ((sqrt * sqrt) < nb)
		sqrt++;
	if ((sqrt * sqrt) == nb)
		return (sqrt);
	else
		return (0);
}

// int main(void) {
// 	printf("Raíz cuadrada de 16: %d\n", ft_sqrt(16));  // Salida esperada: 4
// 	printf("Raíz cuadrada de 25: %d\n", ft_sqrt(25));  // Salida esperada: 5
// 	printf("Raíz cuadrada de 26: %d\n", ft_sqrt(26));  // Salida esperada: 0
// 	printf("Raíz cuadrada de -4: %d\n", ft_sqrt(-4));  // Salida esperada: 0
// 	return 0;
// }