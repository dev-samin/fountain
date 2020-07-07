/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 04:36:46 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 04:39:05 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int idx;
	int i;
	int j;
	int tmp;

	idx = 0;
	i = 0;
	j = 0;
	tmp = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = tmp;
			}
			j++;
		}
		i++;
		j = i;
	}
}
