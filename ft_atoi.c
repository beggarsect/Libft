/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:01:50 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 13:01:51 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	minus = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			minus = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (s[i] - '0') + (result * 10);
		i++;
	}
	return (result * minus);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("check: %d\n", ft_atoi("      -34aasd123"));
// }
