/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/09 18:31:59 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		counter;

	counter = 0;
	while ((s1[counter] || s2[counter]) && (counter <= n))
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
	}
	return (0);
}

int	main(void)
{
	char* s1 = "a";
	char* s2 = "abfewgr";
	printf("%d",ft_strncmp(s1,s2));
}