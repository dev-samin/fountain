/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 08:07:36 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 11:45:11 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*divider(int n1, int n2)
{
	static char cnum[6];

	cnum[0] = n1 / 10 + '0';
	cnum[1] = n1 % 10 + '0';
	cnum[2] = ' ';
	cnum[3] = n2 / 10 + '0';
	cnum[4] = n2 % 10 + '0';
	cnum[5] = ',';
	write(1, &cnum[0], 1);
	write(1, &cnum[1], 1);
	write(1, &cnum[2], 1);
	write(1, &cnum[3], 1);
	write(1, &cnum[4], 1);	
	write(1, &cnum[5], 1);	
	write(1, &cnum[2], 1);
	return (cnum);
}

void	ft_print_comb2(void)
{
	char	*a;
	char	p[2];
	int		i;
	int		j;

	p[0] = ' ';
	p[1] = ',';
	i = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i != j)
			{
				printf("%d %d, ", i, j);
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
