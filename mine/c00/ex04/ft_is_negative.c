/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:36:25 by samin             #+#    #+#             */
/*   Updated: 2020/07/05 17:48:05 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int check;

	if(n >= 0)
	{
		check = 'P';
	}
	else
	{
		check = 'N';
	}	

	write(1, &check, 1);
	
}

int main()
{
	ft_is_negative(1);
	ft_is_negative(-1);
}

