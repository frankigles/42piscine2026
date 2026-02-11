/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 22:37:43 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/11 09:32:56 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	count;

	count = 0;
	while (count > n)
	{
		if (!(s1[count] == s2[count]))
		{
			return (s1[count] - s2[count]);
		}
	}
	return (0);
}
