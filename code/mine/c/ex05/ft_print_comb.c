/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:35:13 by samin             #+#    #+#             */
/*   Updated: 2020/07/05 20:50:08 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	char num1;
   	char num2;
  	char num3;
	char p;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	p = ',';

	while(num1 <= '9')
	{
		while(num2 <= '9')
		{
			while(num3 <= '9')
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				num3++;
			}
		
			write(1, &num1, 1);
			write(1, &num2, 1);
			write(1, &num3, 1);
			num2++;
		}
		write(1, &num1, 1);
		write(1, &num2, 1);
		write(1, &num3, 1);
		num1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return 0;
}
