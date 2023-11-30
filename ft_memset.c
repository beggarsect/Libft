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

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;
	char	v;

	p = (char *)str;
	v = (char)c;
	while (n--)
	{
		*p++ = v;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[10] = "0123456789";
// 	ft_memset(str, '0', 6);
//    	puts(str);
// }