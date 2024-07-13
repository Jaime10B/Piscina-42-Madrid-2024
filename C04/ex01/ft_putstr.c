/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/12 12:55:16 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
void	ft_putstr(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

// int main(void)
// {
// 	ft_putstr("hEeeyyy");
// }