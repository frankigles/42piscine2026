/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:59:36 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 19:59:42 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_arg_check(int argc, char **argv, int *n_arg)
{
	int	dict_size;

	dict_size = 0;
	if (argc == 2)
	{
		dict_size = ft_get_dict_size("./numbers.dict");
		*n_arg = 1;
	}
	else if (argc == 3)
	{
		dict_size = ft_get_dict_size(argv[1]);
		*n_arg = 2;
	}
	if (dict_size < 0)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (dict_size);
}
