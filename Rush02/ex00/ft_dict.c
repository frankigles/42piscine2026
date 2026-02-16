/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:58:45 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 20:20:35 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_get_num_size(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int	ft_get_dict_size(char *dict_route)
{
	char	buff[1];
	int		file_desc;
	int		file_size;
	int		bytes_read;

	file_size = 0;
	bytes_read = 1;
	file_desc = open(dict_route, O_RDONLY);
	if (file_desc < 0)
		return (-1);
	while (bytes_read != 0)
	{
		bytes_read = read(file_desc, buff, 1);
		file_size++;
	}
	close(file_desc);
	return (file_size - 1);
}

void	ft_fill_dict(char **dict, int dict_size, char *dict_route)
{
	int	file_desc;
	int	bytes;

	file_desc = open(dict_route, O_RDONLY);
	bytes = read(file_desc, *dict, dict_size);
	(*dict)[bytes] = '\0';
	close(file_desc);
}

int	ft_input_manager(int n_arg, char **argv, int dict_size, char **dict)
{
	int	i;

	i = 0;
	*dict = (char *)malloc((dict_size + 1) * sizeof(char));
	if (*dict == 0)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	if (n_arg == 1)
	{
		ft_fill_dict(dict, dict_size, "./numbers.dict");
	}
	else if (n_arg == 2)
	{
		ft_fill_dict(dict, dict_size, argv[1]);
	}
	return (1);
}
