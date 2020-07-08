/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 20:55:15 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 23:20:17 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	hex(char key)
{
	char	hextable[];
	int		dec;
	int		idx;

	hextable = "0123456789ABCDEF";
	dec = key;
	if (dec <= 16)
		idx = dec % 16;
	else
		idx = dec / 16;
	return (hextable[idx]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	s0[2];

	s0[0] = 92;
	s0[1] = 48;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			str[i] = hex(str[i]);
			write(1, &s0[0], 2);
		}
		write(1, &str[i], 1);
		i++;
	}
}
