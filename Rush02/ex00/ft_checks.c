/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:28:44 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 20:35:11 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_tens_else(char *str, char *dict, int i)
{
	char	*word;
	char	c[3];

	c[0] = str[i];
	c[1] = '0';
	c[2] = '\0';
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

int	ft_check_tens(char *str, char *dict, int i)
{
	int	num_size;

	num_size = ft_get_num_size(str);
	if (str[i] != '0')
	{
		if (str[i] == '1')
		{
			if (ft_tens_if(str, dict, i) == 0)
				return (0);
		}
		else
		{
			if (ft_tens_else(str, dict, i) == 0)
				return (0);
		}
	}
	return (1);
}

int	ft_tens_if(char *str, char *dict, int i)
{
	char	*word;
	char	c[3];
	int		num_size;

	num_size = ft_get_num_size(str);
	c[0] = str[i];
	c[1] = str[i + 1];
	c[2] = '\0';
	word = ft_word_finder(dict, c);
	if (ft_handle_error(word) == 0)
		return (0);
	if (i == 0)
		ft_putstr_ns(word);
	else
		ft_putstr(word);
	free(word);
	if ((num_size - i - 1) > 1)
		if (ft_print_power(num_size - i - 2, dict) == 0)
			return (0);
	return (1);
}

int	ft_check_hundreds(char *str, char *dict, int i)
{
	char	c[2];
	char	*word;

	c[1] = '\0';
	if (str[i] != '0')
	{
		c[0] = str[i];
		word = ft_word_finder(dict, c);
		if (ft_handle_error(word) == 0)
			return (0);
		if (i == 0)
			ft_putstr_ns(word);
		else
			ft_putstr(word);
		free(word);
		if (ft_print_power(2, dict) == 0)
			return (0);
	}
	return (1);
}

int	ft_check_unit(char *str, char *dict, int i)
{
	char	c[2];
	char	*word;
	int		num_size;

	word = 0;
	num_size = ft_get_num_size(str);
	c[0] = str[i];
	c[1] = '\0';
	if (c[0] != '0')
		if (ft_check_unit_first_if(word, dict, c, i) == 0)
			return (0);
	if ((num_size - i - 1) > 0 && (str[i] != '0' || str[i - 1] != '0' || str[i
				- 2] != '0'))
	{
		if (ft_print_power(num_size - i - 1, dict) == 0)
			return (0);
	}
	return (1);
}
