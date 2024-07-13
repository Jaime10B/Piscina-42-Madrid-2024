/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/12 13:49:06 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isspace(char *str)
{
	if (*str == 32 || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	else
		return (0);
}

int	ft_isint(char *str)
{
	if ((*str >= 48) && (*str <= 57))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		counter;
	int		signo;
	int		numero;

	counter = 0;
	signo = 1;
	numero = 0;
	while (ft_isspace(&str[counter])
		|| str[counter] == 45 || str[counter] == 43)
	{
		if (str[counter] == 45)
			signo = signo * -1;
		counter++;
	}
	while (ft_isint(&str[counter]))
	{
		numero = numero * 10;
		numero = numero + (str[counter] - '0');
		counter++;
	}
	numero = numero * signo;
	return (numero);
}

// int main(void)
// {
// 	//printf("%d", ft_isspace(" "));
// 	printf("%d", ft_atoi("  ---+--+1234ab567"));
// }