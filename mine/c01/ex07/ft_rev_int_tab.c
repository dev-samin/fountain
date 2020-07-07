/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:51:56 by samin             #+#    #+#             */
/*   Updated: 2020/07/07 19:07:05 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	size -= 1;
	i = 0;
	tmp = 0;
	while (i < size/2)
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = tmp;
		i++;
		size--;
	}
}

int main()
{
	int tab[10] = {1,2,3,4,5,6,7,8,9,0};
	int i = 0;
	ft_rev_int_tab(tab, 10);

	while(i<10)
	{
		printf("%d", tab[i]);	
		i++;
	}

	return (0);
}
