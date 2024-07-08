/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:48:28 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/07 19:56:54 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int		posicion;
	int		contador_posiciones;
	int		aux;

	posicion = 0;
	while (posicion < size -1)
	{
		contador_posiciones = 0;
		while (contador_posiciones < size - 1)
		{
			if (tab[contador_posiciones] > tab[contador_posiciones + 1])
			{
				aux = tab[contador_posiciones];
				tab[contador_posiciones] = tab[contador_posiciones + 1];
				tab[contador_posiciones + 1] = aux;
			}
			contador_posiciones++;
		}
		posicion++;
	}
}

// int	main (void)
// {
// 	int array[] = {9,8,7,6,5,4,3,2,1};
// 	int longitud = 9;
// 	ft_sort_int_tab(array, longitud);

// 	char c;

// 	for (int i = 0; i < longitud; i++)
//     {
// 		c = array[i] + '0';
//         write(1, &c , 1);
//         write(1, " ", 1);

//     }
//     write(1, "\n", 1);

//     return 0;
// }