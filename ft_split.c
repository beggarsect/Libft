/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:01:50 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 13:01:51 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeup(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_wordcount(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static void	ft_strcpy(char *word, char *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[j] != '\0' && s[j] == c)
		j++;
	while (s[j + i] != c && s[j + i] != '\0')
	{
		word[i] = s[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *s, char c, int *k)
{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (s[*k] != '\0')
	{
		if (s[*k] != c)
		{
			while (s[*k] != '\0' && s[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char) * (*k + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*k += 1;
	}
	ft_strcpy(word, s, c, j);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		pos;
	char	**strs;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_wordcount((char *)s, c);
	pos = 0;
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (!strs)
		return (NULL);
	strs[j] = NULL;
	while (i < j)
	{
		strs[i] = ft_stralloc(((char *)s), c, &pos);
		if (strs[i] == NULL)
		{
			ft_freeup(strs[i]);
		}
		i++;
	}
	return (strs);
}
