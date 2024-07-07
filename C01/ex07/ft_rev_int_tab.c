/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:04:31 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/07 14:17:07 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		contador;
	int		temp;

	contador = 0;
	while (contador < (size / 2))
	{
		temp = tab[contador];
		tab[contador] = tab[size - contador -1];
		tab[size - contador -1] = temp;
		contador++;
	}
}

// int main (void)
// {
// 	int n[8] = {1,2,3,4,5,6,7,8};
// 	int t = 8;
// 	ft_rev_int_tab(n,t);

// 	char c ;

// 	for( int i=0; i<t ;i++)
// 	{
// 		c = n[i] + '0';
// 		//write(1,&c,1);
// 		printf("%d",n[i]);

// 	}
// }