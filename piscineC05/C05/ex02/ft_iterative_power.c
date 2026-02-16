/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:42:20 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/14 11:48:35 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pot;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	pot = nb;
	while (i < power - 1)
	{
		pot = pot * nb;
		i++;
	}
	return (pot);
}

/*int main(void)
{
	int x;
	int nb;
	int power;
	
	nb = 0;
	power = 3;
	x = ft_iterative_power(nb, power);
	return (0);
}*/	
