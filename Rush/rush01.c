/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:01:03 by jsobotka          #+#    #+#             */
/*   Updated: 2026/01/31 21:50:55 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern	void	ft_putchar(char car);

void rush(int	col, int	row)
{
	int	col_count;
	int	y;
	
	col_count = 0;
	y = 0;
	while(col_count < raw)
	{
		while(y < col)
		{
			if(col_count == 0)
			{
				if(y == 0)	ft_putchar('/');				
				else if(y == col - 1)
				{
					ft_putchar('\\');
				}
				else ft_putchar('*');
			}
			else if(col_count == raw - 1)
			{
				if(y == 0)	ft_putchar('\\');				
				else if(y == col - 1)	ft_putchar('/');
				else ft_putchar('*');
			}	
			else
			{
				if(y == 0)	ft_putchar('*');				
				else if(y == col - 1)
				{
					ft_putchar('*');
					
				}
				else ft_putchar(' ');
			}
			if(y == col - 1)	ft_putchar('\n');
			y++;
		}
		y = 0;
		col_count++;
	}
	col_count = 0;
}
