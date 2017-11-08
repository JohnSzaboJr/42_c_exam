/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:42:41 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/08 12:51:49 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rostring(char *str)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (str[i] == ' ')
	{
		i++;
		k++;
	}
	while (!(str[i] == ' ' && str[i + 1] != ' '))
	{
		i++;
		j++;
	}
	i++;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		if (!(str[i] == ' ' && str[i + 1] == '\0'))
		{
			ft_putchar(str[i]);
			l++;
		}
		i++;
	}
	if (j > 0)
	{
		if (l > 0)
			ft_putchar(' ');
		i = k;
		while (str[i] != ' ')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
