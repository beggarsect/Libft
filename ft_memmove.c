/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:44:43 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 12:44:45 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (!dest && !src)
		return (dest);
	if (src > dest)
	{
		while (n--)
			*dest++ = *src++;
	}
	else
	{
		while (n--)
		{
			*(dest + n) = *(src + n);
		}
	}
	return (s1);
}

// int	main(void)
// {
// 	char str[9];
// 	ft_memmove(str, "123456789", 3);
//    	puts(str);
// }
