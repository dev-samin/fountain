/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 04:34:52 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 04:36:23 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	size -= 1;
	i = 0;
	tmp = 0;
	while (i < size / 2)
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = tmp;
		i++;
		size--;
	}
}
