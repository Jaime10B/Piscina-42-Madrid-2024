/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/09 18:25:48 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int		counter;

	counter = 0;
	while (s1[counter] || s2[counter])
	{
		if (s1[counter] != s2[counter])
            return (s1[counter] - s2[counter]);
		counter++;
	}
	return(0);
}

// int	main(void)
// {
// 	char* s1 = "a";
// 	char* s2 = "abfewgr";
// 	printf("%d",ft_strcmp(s1,s2));
// }