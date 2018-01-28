/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:23:49 by rmdaba            #+#    #+#             */
/*   Updated: 2018/01/28 14:37:02 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		rush_alpha(char *str, int w, int h)
{
	if (rush02(str, w, h) == 1 || rush03(str, w, h) == 1
			|| rush04(str, w, h))
	{
		if (w == 1 && h == 1)
			return (9);
		else if (w == 1)
			return (6);
		else if (h == 1)
			return (7);
		else if (rush02(str, w, h) == 1)
			return (2);
		else if (rush03(str, w, h) == 1)
			return (3);
		else if (rush04(str, w, h) == 1)
			return (4);
		else
			return (-1);
	}
	else
		return (-1);
}
