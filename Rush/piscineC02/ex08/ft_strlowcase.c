/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:36:54 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/05 14:14:27 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 97 && str[count] <= 122))
		{
			if (!(str[count] == 32))
				str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
