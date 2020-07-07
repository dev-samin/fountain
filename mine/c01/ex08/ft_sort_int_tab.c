/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 19:15:18 by samin             #+#    #+#             */
/*   Updated: 2020/07/07 20:22:25 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
	int idx;
	int i;
	int j;
	int tmp;

	idx = 0;	
	i = 0;
	j = 0;
	tmp = 0; 

	while (i < size) {
		while (j < size) {
			if(*(tab + i) > *(tab + j))
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
