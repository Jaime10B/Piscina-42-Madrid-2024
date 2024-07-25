/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/23 12:47:50 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *w)
{
	int	i;

	i = 0;
	while (w[i] != '\0')
		i++;
	return (i);
}

int	errors(char *b)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '+' || b[i] == '-')
			return (0);
		while (j < i)
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	while (b[count] != '\0')
		count++;
	if (count < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (errors(base) == 0)
		return ;
	base_len = str_len(base);
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(-(nbr / base_len), base);
		ft_putchar(base[-(nbr % base_len)]);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}

// int	main(void)
// {
// 	ft_putnbr_base(8, "0123456789ABCDEF");
// }
