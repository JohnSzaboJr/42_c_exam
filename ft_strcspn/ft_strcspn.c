/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:03:57 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/09 17:33:42 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
	int b;
	const char *str;

	b = 0;
	str = s;
	while (*s)
	{
		while (reject[b] != '\0')
		{
			if (*s == reject[b])
				return (s - str);
			b++;
		}
		b = 0;
		s++;
	}
	return (s - str);
}
