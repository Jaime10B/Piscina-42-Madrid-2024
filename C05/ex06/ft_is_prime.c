/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/18 18:20:50 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int		counter;

	counter = nb - 1;
	if (nb <= 1)
		return (0);
	while (counter > 1)
	{
		if (nb % counter == 0)
			return (0);
		counter--;
	}
	return (1);
}

// int main(void)
// {
// 	printf("%d", ft_is_prime(7));
// 	printf("%d", ft_is_prime(8));
// 	printf("%d", ft_is_prime(9));
// }