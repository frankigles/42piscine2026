/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_power.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:49:15 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 20:13:18 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_print_power(int num_zeros, char *dict)
{
	char	*pow_str;
	char	*word;

	pow_str = ft_build_power(num_zeros);
	word = ft_word_finder(dict, pow_str);
	free(pow_str);
	if (ft_handle_error(word) == 0)
		return (0);
	ft_putstr(word);
	free(word);
	return (1);
}

char	*ft_build_power(int num_zeros)
{
	int		i;
	char	*str;

	str = (char *)malloc(num_zeros + 2);
	str[0] = '1';
	str[num_zeros + 1] = '\0';
	i = 1;
	while (i < num_zeros + 1)
	{
		str[i] = '0';
		i++;
	}
	return (str);
}

int	ft_check_unit_first_if(char *word, char *dict, char *c, int i)
{
	word = ft_word_finder(dict, c);
	if (ft_handle_error(word) == 0)
		return (0);
	if (i == 0)
		ft_putstr_ns(word);
	else
		ft_putstr(word);
	free(word);
	return (1);
}
