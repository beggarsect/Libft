/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:24:45 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 11:24:48 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*p;

	p = (char *)ptr;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[10] = "0123456789";
// 	ft_memset(str, '0', 6);
//    	puts(str);
// }