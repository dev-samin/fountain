/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 17:02:19 by samin             #+#    #+#             */
/*   Updated: 2020/07/05 17:07:07 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
