/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:10:49 by samin             #+#    #+#             */
/*   Updated: 2020/07/05 17:14:49 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char alpha = 'z';
	
	while (alpha >= 'a')
	{
		write(1, &alpha, 1);
		alpha--;
	}	
}

int main()
{
	ft_print_reverse_alphabet();
}
