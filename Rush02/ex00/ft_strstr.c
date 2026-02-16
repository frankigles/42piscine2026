/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:58:21 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 20:23:31 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j] && str[i + j] != '\0'))
		{
			j++;
			if (to_find[j] == '\0')
			{
				if (str[i + j] == ':' || (str[i + j] == ' '))
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

void	ft_word_finder_while(char *num, int *i, int *j)
{
	while (num[*i] != '\n' && num[*i] != '\0')
	{
		if (num[*i] == ':')
		{
			(*i)++;
			while (num[*i] == ' ')
				(*i)++;
			*j = *i;
			while (num[*j] != '\n' && num[*j] != '\0')
				(*j)++;
			while (*j > *i && num[*j - 1] == ' ')
				(*j)--;
			break ;
		}
		(*i)++;
	}
}

char	*ft_word_finder(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*num;
	char	*word;

	j = 0;
	i = 0;
	num = ft_strstr(str, to_find);
	if (num == 0)
		return (0);
	ft_word_finder_while(num, &i, &j);
	word = (char *)malloc(j - i + 1);
	if (word == 0)
		return (0);
	k = 0;
	while (i < j)
	{
		word[k] = num[i];
		i++;
		k++;
	}
	word[k] = '\0';
	return (word);
}
