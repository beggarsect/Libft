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
	void	*ptr;

	if (num_elements == 0 || element_size == 0)
		return (NULL);
	ptr = malloc(num_elements * element_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, num_elements * element_size);
	return (ptr);
}

// eugene
// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*ptr;
// 	long	size_max;

// 	size_max = 461168601842738790;
// 	if (count == 0 || size == 0 || count > size_max / size)
// 		return (NULL);
// 	ptr = malloc(count * size);
// 	if (ptr == NULL)
// 		return (NULL);
// 	ft_memset(ptr, 0, count * size);
// 	return (ptr);
// }