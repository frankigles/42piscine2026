/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:00:48 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/05 14:14:42 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int count;

    count = 0;
    while(str[count])
    {
        if(!(str[count] >= '0' && str[count] <= '9'))
            return(0);
    }
    return (1);
}
