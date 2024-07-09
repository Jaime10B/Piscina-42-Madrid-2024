/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiez-bu <jdiez-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:09:41 by jdiez-bu          #+#    #+#             */
/*   Updated: 2024/07/09 17:20:17 by jdiez-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_print_memory(void *addr, unsigned int size)
{
	printf("%p", addr);
	return (addr);
}

int	main(void)
{
	char content[] = "Para probar nomas";
	unsigned int size = 17;
	ft_print_memory((void*) &content, size);
}