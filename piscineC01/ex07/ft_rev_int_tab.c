/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:30:35 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/03 19:07:47 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	inter;
	int	count;

	count = 0;
	while (count < size - 1)
	{
		inter = tab[size - 1];
		tab[size - 1] = tab[count];
		tab[count] = inter;
		count++;
		size--;
	}
}
