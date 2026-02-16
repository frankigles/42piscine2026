/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:57:12 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 20:22:12 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_printer(char *str, char *dict)
{
	int	num_size;
	int	i;

	num_size = ft_get_num_size(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((num_size - i - 1) % 3 == 2)
			if (ft_check_hundreds(str, dict, i) == 0)
				return (0);
		if ((num_size - i - 1) % 3 == 1)
			if (ft_check_tens(str, dict, i) == 0)
				return (0);
		if ((num_size - i - 1) % 3 == 0 && str[i - 1] != '1')
			if (ft_check_unit(str, dict, i) == 0)
				return (0);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}

int	ft_check_number_input(char **argv, int n_arg)
{
	int	i;

	i = 0;
	if (argv[n_arg][i] == '\0')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[n_arg][i] != '\0')
	{
		if (argv[n_arg][i] < '0' || argv[n_arg][i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_get_number_start(char **argv, int n_arg)
{
	int	i;

	i = 0;
	while (argv[n_arg][i] != '\0')
	{
		if (argv[n_arg][i] >= '1' && argv[n_arg][i] <= '9')
		{
			return (&argv[n_arg][i]);
		}
		i++;
	}
	return (0);
}

int	ft_zero(char *dict)
{
	char	*zero;

	zero = ft_word_finder(dict, "0");
	if (ft_handle_error(zero) == 0)
		return (0);
	ft_putstr_ns(zero);
	free(zero);
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*num_str;
	char	*dict;
	int		dict_size;
	int		n_arg;

	dict_size = ft_arg_check(argc, argv, &n_arg);
	if (dict_size == 0)
		return (0);
	if (ft_check_number_input(argv, n_arg) == 0)
		return (0);
	num_str = ft_get_number_start(argv, n_arg);
	if (ft_input_manager(n_arg, argv, dict_size, &dict) == 0)
	{
		free(dict);
		return (0);
	}
	if (num_str == 0 && ft_zero(dict) == 0)
		return (free(dict), 0);
	if (ft_printer(num_str, dict) == 0)
		return (free(dict), 0);
	free(dict);
	return (0);
}
