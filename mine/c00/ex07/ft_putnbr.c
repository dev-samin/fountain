/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 05:02:59 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 16:12:54 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		intnbr;
	char	ngt;
	char	quo;
	int		mod;

	intnbr = 100000000;
	mod = nb;
	ngt = '-';
	if (nb < 0)
	{
		mod *= -1;
		write(1, &ngt, 1);
	}
	while (intnbr >= 1)
	{
		quo = mod / intnbr + '0';
		mod = mod % intnbr;
		intnbr /= 10;
		write(1, &quo, 1);
	}
}

int main()
{
    ft_putnbr(0);
}
