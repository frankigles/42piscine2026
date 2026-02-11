/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:01:03 by jsobotka          #+#    #+#             */
/*   Updated: 2026/01/31 18:50:38 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern	void	rush(int col, int raw);

int main()
{
	int col;
	int row;
	
	write(STDOUT_FILENO, "Columnas:", 11);
	scanf("%d", &col);
	write(STDOUT_FILENO, "Lineas:", 9);
	scanf("%d", &row);
	
	rush(col, row);
	return (0);
}
