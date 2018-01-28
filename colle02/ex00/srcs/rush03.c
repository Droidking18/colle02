/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:18:00 by rmdaba            #+#    #+#             */
/*   Updated: 2018/01/28 14:18:03 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int		check_top(char *str, int w)
{
	int i;

	i = 1;
	while (i < w - 1)
	{
		if (str[i] != 'B')
			return (0);
		i++;
	}
	if (str[i] != 'C' && w > 1)
		return (0);
	else
		return (1);
}

static int		check_bottom(char *str, int i, int w)
{
	while (str[i] != '\n')
	{
		if (str[i] != 'A')
			if (str[i] != 'B' && str[i] != 'C' && w > 2)
				return (0);
		return (1);
		i++;
	}
	if (str[i + 1])
		return (0);
	return (1);
}

static int		check_body(char *str, int w, int h)
{
	int i;

	i = (w + 2);
	if (h > 2)
	{
		while (str[i] == 'B' || str[i] == ' ' || str[i] == '\n')
			i++;
		if (str[i] == 'A')
		{
			if (check_bottom(str, i, w) == 1)
				return (1);
			return (0);
		}
		return (0);
	}
	else
	{
		if (check_bottom(str, i, w) == 1)
			return (1);
		return (0);
	}
}

int				rush03(char *str, int w, int h)
{
	if (w == 1 && h == 1)
		return (1);
	else if (h == 1 && check_top(str, w) == 1)
		return (1);
	else if (check_top(str, w) == 1 && check_body(str, w, h) == 1)
		return (1);
	return (0);
}
