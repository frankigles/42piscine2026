/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 23:48:42 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/12 15:37:16 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	second_count;

	count = 0;
	while (dest[count])
		count++;
	second_count = 0;
	while ((second_count < nb) && (src[second_count]))
	{
		dest[count] = src[second_count];
		count++;
		second_count++;
	}
	dest[count] = '\0';
	return (dest);
}
