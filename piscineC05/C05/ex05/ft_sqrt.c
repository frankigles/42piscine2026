/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:57:15 by fraigles          #+#    #+#             */
/*   Updated: 2026/02/14 23:09:29 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb > 2)
		root = nb / 2;
	else
		root = nb;
	if (nb < 0)
		return (0);
	while (root > 0)
	{
		if (root * root == nb)
			return (root);
		else
			root --;
	}
	return (0);
}

/*#include <unistd.h>

int main(void)
{
	int x = ft_sqrt(1) + '0';
	write(1, &x,1);
	write(1, "\n",1);
	x = ft_sqrt(1) + '0';
	write(1, &x,1);
	write(1, "\n",1);
	x = ft_sqrt(2) + '0';
	write(1, &x,1);
	write(1, "\n",1);
		x = ft_sqrt(3) + '0';
	write(1, &x,1);
	write(1, "\n",1);
		x = ft_sqrt(4) + '0';
	write(1, &x,1);
	write(1, "\n",1);
		x = ft_sqrt(64) + '0';
	write(1, &x,1);
	write(1, "\n",1);
		x = ft_sqrt(81) + '0';
	write(1, &x,1);
	write(1, "\n",1);
	return (0);
}*/
