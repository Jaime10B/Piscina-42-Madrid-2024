/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/19 13:06:20 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		*ft_range(int min, int max)
{
	int		*array;
	int		i;

	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof(int));
	i = 0;
	if (!array)
		return (0);
	while(i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return(array);
}
