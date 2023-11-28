/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:30:15 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 11:30:19 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	bytes;
	void	*p;

	if (num_elements == 0 || element_size == 0)
	{
		num_elements = 1;
		element_size = 1;
	}
	bytes = num_elements * element_size;
	p = malloc(bytes);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, bytes);
	return (p);
}


