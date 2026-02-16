/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 22:37:02 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/14 09:41:58 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	i = 1;
	fac = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i < fac)
		{
			nb = nb * i;
			i++;
		}
	}
	else
		return (0);
	return (nb);
}
