/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/19 12:53:46 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return(-1);
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}

// int main(void)
// {
// 	int *tab;
// 	int size;
// 	int i;

// 	size = ft_ultimate_range(&tab, -2, 10);
// 	if (size == -1)
// 	{
// 		return (1);
// 	}

// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}

// 	free(tab);
// 	return (0);
// }