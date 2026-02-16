/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:08:57 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/14 23:09:03 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (0);
	if (nb <= 0)
		return (0);
	while (i <= nb / 2)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int x;
	x = ft_is_prime(6) + '0';
	write(1, &x, 1);
	return (0);
}*/
