/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:36:14 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/11 14:34:20 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0')
	{
		if (!(s1[count] == s2[count]))
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

void	ft_print_order(char **argv, int argc)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		write(1, "\n", 1);
		count++;
	}
}

int	main(int argc, char *argv[])
{
	int		count;
	int		swap;
	char	*aux;

	count = 1;
	swap = 1;
	while (swap)
	{
		swap = 0;
		count = 0;
		while (count < argc - 1)
		{
			if (ft_strcmp(argv[count], argv[count + 1]) > 0)
			{
				aux = argv[count];
				argv[count] = argv[count + 1];
				argv[count + 1] = aux;
				swap = 1;
			}
			count++;
		}
	}
	ft_print_order(argv, argc);
}
