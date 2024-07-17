/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/15 20:19:01 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	only_once(char *base, int position)
{
	int		counter;

	counter = 0;
	while (base[counter] && base[position])
	{
		if (base[counter] == base[position] && position != counter)
			return (0);
		else if (base[counter + 1] == '\0' && base[position + 1] == '\0')
			return (1);
		counter++;
	}
	return (only_once(base, position + 1));
}

int	check_sign(char *base)
{
	int		counter;

	counter = 0;
	while (base[counter])
	{
		if (base[counter] == '+' || base[counter] == '-')
			return (0);
		counter++;
	}
	return (1);
}

void	ft_change_base(long nbr, char *base, int len)
{
	if (nbr >= len)
		ft_change_base(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	len = 0;
	n = nbr;
	while (base[len])
		len++;
	if ((len < 2 || !only_once(base, 0) || !check_sign(base)))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			n = n * -1;
		}
		ft_change_base(n, base, len);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(8, "0123456789ABCDEF");
// }
