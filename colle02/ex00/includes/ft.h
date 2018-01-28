/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 13:46:48 by vmarchau          #+#    #+#             */
/*   Updated: 2018/01/28 15:27:41 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# define BUFFER_SIZE 1

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*read_stdin(void);
int		choose_rush(char *str, int w, int h);
int		rush00(char *str, int w, int h);
int		rush01(char *str, int w, int h);
int		rush02(char *str, int w, int h);
int		rush03(char *str, int w, int h);
int		rush04(char *str, int w, int h);
int		rush_alpha(char *str, int w, int h);
int		width(char *str);
int		height(char *str);
int		choose_rush(char *str, int w, int h);
void	ft_putnbr(int nb);
void	ft_res(char *str, int w, int h);
#endif
