/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/16 13:24:23 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	get_index(char c, char *base)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	logic(char *str, char *base, int len)
{
	int		index;
	long	n;

	n = 0;
	while (*str)
	{
		index = get_index(*str, base);
		if (index == -1)
			return (0);
		n = n * len + index;
		str++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	long	n;
	int		sign;

	len = 0;
	n = 0;
	sign = 1;
	while (base[len])
		len++;
	if (len < 2 || !only_once(base, 0) || !check_sign(base))
		return (0);
	while (*str == 32 || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	n = logic(str, base, len);
	return (n * sign);
}

int	main(void)
{
	printf("%d", ft_atoi_base("11", "0123456789ABCDEF"));
}
