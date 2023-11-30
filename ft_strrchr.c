/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:43:43 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 12:43:45 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			result = ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (result);
}

// int	main(void)
// {
//    	puts(ft_strrchr("hello 42 prague", ' '));
// }
