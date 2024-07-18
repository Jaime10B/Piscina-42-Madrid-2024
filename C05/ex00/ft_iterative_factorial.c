/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/18 13:18:07 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(6));  // Salida esperada: 720
// 	printf("%d\n", ft_iterative_factorial(0));  // Salida esperada: 1
// 	printf("%d\n", ft_iterative_factorial(-5)); // Salida esperada: 0
// }