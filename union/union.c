/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:37:36 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/09 11:58:27 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*delete_char(char *str, char c)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			j = i;
			while (str[i] != '\0')
			{
				str[i] = str[i + 1];
				i++;
			}
			i = j - 1;
		}
		i++;
	}
	return str;
}

void	ft_union(char *str1, char *str2)
{
	while (str1[0] != '\0')
	{
		ft_putchar(str1[0]);
		delete_char(str1, str1[0]);
		delete_char(str2, str1[0]);
	}
	while (str2[0] !='\0')
	{
		ft_putchar(str2[0]);
		delete_char(str2, str2[0]);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
