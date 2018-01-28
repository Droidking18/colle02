/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmdaba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:19:48 by rmdaba            #+#    #+#             */
/*   Updated: 2018/01/28 14:19:51 by rmdaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*read_stdin(void)
{
	char			buff[1];
	int				i;
	int				ret;
	char			*tab;

	tab = malloc(sizeof(*tab));
	i = 0;
	while ((ret = read(0, buff, BUFFER_SIZE)))
	{
		if (ret == 0)
			return ("aucune\n");
		tab[i] = buff[0];
		i++;
	}
	return (tab);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
