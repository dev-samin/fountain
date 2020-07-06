/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 21:48:18 by samin             #+#    #+#             */
/*   Updated: 2020/07/06 23:46:31 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int tmp = a/b;
	div = &tmp;
	printf("%d", div);
}

int main()
{
	int a = 20;
	int b = 5;
	int *div;
	int *mod;

	ft_div_mod(1, 5, &div, &&od);
}
