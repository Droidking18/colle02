/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:30:04 by rmdaba            #+#    #+#             */
/*   Updated: 2018/01/28 14:30:09 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		height(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		choose_rush(char *str, int w, int h)
{
	int	ret;

	if (str[0] == 'o')
		ret = rush00(str, w, h);
	else if (str[0] == '/')
		ret = rush01(str, w, h);
	else if (str[0] == 'A')
		ret = rush_alpha(str, w, h);
	else
		ret = -1;
	return (ret);
}
