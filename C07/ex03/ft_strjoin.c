/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/22 13:32:03 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		total_len;
	int		sep_len;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			total_len++;
			j++;
		}
		if (i < size -1)
			total_len += sep_len;
		i++;
	}
	total_len++;
	return (total_len);
}

void	ft_strcpy(char *dest, char *src, int *index)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[*index] = src[i];
		(*index)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*array;
	int		array_position;
	int		total_len;

	total_len = ft_total_len(size, strs, sep);
	array = malloc(total_len * sizeof(char));
	if (!array)
		return (0);
	i = 0;
	array_position = 0;
	while (i < size)
	{
		ft_strcpy(array, strs[i], &array_position);
		if (i < size -1)
			ft_strcpy(array, sep, &array_position);
		i++;
	}
	array[array_position] = '\0';
	return (array);
}

// int main(void)
// {
// 	char *strs[] = {"Hello", "world", "this", "is", "ft_strjoin"};
// 	char *sep = " / b /jk/";
// 	char *result = ft_strjoin(5, strs, sep);
// 	if (result)
// 	{
// 		write(1, result, ft_strlen(result));
// 		free(result);
// 	}
// 	return 0;
// }