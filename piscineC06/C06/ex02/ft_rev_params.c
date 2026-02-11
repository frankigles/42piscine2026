/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:58:26 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/11 14:33:52 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	int	count;

	(void)argc;
	count = argc - 1;
	while (count > 0)
	{
		ft_putstr(argv[count]);
		write(1, "\n", 1);
		count--;
	}
}
