/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:01:57 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/05 14:14:33 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if ((src[count] != '\0') && (dest[count] != '\0'))
		{
			dest[count] = src[count];
		}
		count++;
	}
	return (dest);
}
