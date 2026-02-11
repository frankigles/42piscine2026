/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 09:49:58 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/05 14:14:30 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (dest[count] != '\0'))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return(dest);
}
