/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 19:15:06 by samin             #+#    #+#             */
/*   Updated: 2020/07/06 23:24:54 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr){
	*********nbr = 42;
}

int main(void)
{
	int num0 = 2;
	int *num1 = &num0;
	int **num2 = &num1;
	int ***num3 = &num2;
	int ****num4 = &num3;
	int *****num5 = &num4;
	int ******num6 = &num5;
	int *******num7 = &num6;
	int ********num8 = &num7;
	int *********nbr = &num8;

	printf("%d\n", *num1);
	ft_ultimate_ft(nbr);
	printf("%d", *num1);
}
