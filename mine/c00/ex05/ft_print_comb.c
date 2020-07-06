/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 15:26:23 by samin             #+#    #+#             */
/*   Updated: 2020/07/06 15:32:29 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char	num[5];

	num[0] = '0';
	num[3] = ',';
	num[4] = ' ';
	while (num[0] <= '9')
	{
		num[1] = num[1] + 1;
		while (num[1] <= '9')
		{
			num[2] = num[2] + 1;
			while (num[2] <= '9')
			{
				if (num[0] != num[1] && num[1] != num[2] && num[2] != num[0])
				{
					write(1, &num[0], 1);
					write(1, &num[1], 1);
					write(1, &num[2], 1);
					write(1, &num[3], 1);
					write(1, &num[4], 1);
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
