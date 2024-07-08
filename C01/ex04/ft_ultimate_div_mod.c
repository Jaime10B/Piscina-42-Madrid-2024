/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:46:28 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/08 16:32:37 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}

// int main(void)
// {
// 	int a=11;
// 	int b=2;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("%d\n",a);
// 	printf("%d",b);
// }