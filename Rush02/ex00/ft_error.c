/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:31:21 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 19:56:12 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_handle_error(char *word)
{
	if (word == 0)
	{
		free(word);
		write(1, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}
