/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:43:07 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 12:43:09 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *substring, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*substring == '\0')
		return ((char *)string);
	while (i < n && string[i] != '\0')
	{
		j = 0;
		while (i + j < n && string[i + j]
			== substring[j] && substring[j] != '\0')
		{
			j++;
		}
		if (substring[j] == '\0')
		{
			return ((char *)string + i);
		}
		i++;
	}
	return (NULL);
}
