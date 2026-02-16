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
	int	i;
	int	root;

	root = 0;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		root = (i * i) % nb;
		if (root == 0)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	int x = ft_sqrt(10) + '0';
	write(1, &x,1);
	write(1, "\n",1);
	x = ft_sqrt(16) + '0';
	write(1, &x,1);
	write(1, "\n",1);
	x = ft_sqrt(6) + '0';
	write(1, &x,1);
	write(1, "\n",1);
		x = ft_sqrt(36) + '0';
	write(1, &x,1);
	write(1, "\n",1);
		x = ft_sqrt(49) + '0';
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
