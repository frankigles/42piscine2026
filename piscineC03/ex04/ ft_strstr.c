/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:56:50 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/11 10:29:17 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	first_count;
	int	second_count;
	int	position;

	first_count = 0;
	second_count = 0;
	position = '\0';
	while (str[first_count])
	{
		if (to_find[second_count] == '\0')
			break ;
		if (str[first_count] == to_find[second_count])
		{
			if (second_count == 0)
				position = first_count;
			second_count++;
		}
		else
			second_count = 0;
		first_count++;
	}
	return (&str[position]);
}

/*int	main(void)
{
	char str[] = "Hola como va?";
	char to_find[] = "como";
	char pos;
	pos = *ft_strstr(str, to_find);
	write(1, &pos, 1);
	return (0);
}*/