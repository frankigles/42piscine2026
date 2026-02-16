/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandr <alejandr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:26:18 by alejandr          #+#    #+#             */
/*   Updated: 2026/02/15 20:42:36 by alejandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_check_unit_first_if(char *word, char *dict, char *c, int i);
int		ft_arg_check(int argc, char **argv, int *n_arg);
char	*ft_get_number_start(char **argv, int n_arg);
int		ft_input_manager(int n_arg, char **argv, int dict_size, char **dict);
int		ft_get_num_size(char *str);
int		ft_get_dict_size(char *dict_route);
void	ft_fill_dict(char **dict, int dict_size, char *dict_route);
char	*ft_build_power(int num_zeros);
char	*ft_strstr(char *str, char *to_find);
char	*ft_word_finder(char *str, char *to_find);
void	ft_putstr(char *str);
void	ft_putstr_ns(char *str);
int		ft_handle_error(char *word);
int		ft_check_hundreds(char *str, char *dict, int i);
int		ft_check_tens(char *str, char *dict, int i);
int		ft_tens_if(char *str, char *dict, int i);
int		ft_tens_else(char *str, char *dict, int i);
int		ft_check_unit(char *str, char *dict, int i);
int		ft_printer(char *str, char *dict);
int		ft_check_number_input(char **argv, int n_arg);
char	*ft_get_number_start(char **argv, int n_arg);
int		ft_zero(char *dict);
int		ft_print_power(int num_zeros, char *dict);
#endif