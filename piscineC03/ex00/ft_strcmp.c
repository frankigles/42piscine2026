/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 21:06:08 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/11 10:59:00 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != 0)
	{
		if (!(s1[count] == s2[count]))
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}
