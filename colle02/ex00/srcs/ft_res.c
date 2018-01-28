/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_res.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:27:41 by rmdaba            #+#    #+#             */
/*   Updated: 2018/01/28 15:30:38 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_result(int w, int h, int i)
{
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}

void	square(int x, int y)
{
	ft_putstr(" || [carre] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || [rectangle] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	rectangle(int x, int y)
{
	ft_putstr(" || [rectangle] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	special_result(char *str, int w, int h)
{
	int i;

	i = 2;
	if (choose_rush(str, w, h) == 7)
		i = 3;
	while (i <= 4)
	{
		ft_result(w, h, i);
		if (i != 4)
			ft_putstr(" || ");
		if (choose_rush(str, w, h) == 6)
			i = i + 2;
		else if (choose_rush(str, w, h) > 6)
			i++;
	}
}

void	ft_res(char *str, int w, int h)
{
	if (choose_rush(str, w, h) == -1)
		ft_putstr("aucune\n");
	else if (choose_rush(str, w, h) >= 0 && choose_rush(str, w, h) <= 4)
	{
		ft_result(w, h, choose_rush(str, w, h));
		if (w == h && w > 1 && h > 1)
			square(w, h);
		else if (w > h && w > 1 && h > 1)
			rectangle(w, h);
		ft_putchar('\n');
	}
	else if (choose_rush(str, w, h) >= 6 && choose_rush(str, w, h) <= 9)
	{
		special_result(str, w, h);
		if (w == h && w > 1 && h > 1)
			square(w, h);
		else if (w > h && w > 1 && h > 1)
			rectangle(w, h);
		ft_putchar('\n');
	}
}
