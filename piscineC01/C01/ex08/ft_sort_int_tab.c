/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 09:09:53 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/04 09:13:26 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	var_aux;
	int	first_count;
	int	second_count;

	first_count = 0;
	while (first_count <= size - 1)
	{
		second_count = first_count + 1;
		while (second_count <= size - 1)
		{
			if (tab[first_count] > tab[second_count])
			{
				var_aux = tab[first_count];
				tab[first_count] = tab[second_count];
				tab[second_count] = var_aux;
			}
			second_count++;
		}
		first_count++;
	}
}
