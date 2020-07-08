/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:15:43 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 18:33:32 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;
	
	i = 0;
	if (str[0] == '\0')
		return 1;

	while (str[i] != '\0'){
		if(str[i] >= 0 && str[i] <= 32 )
			return 0;
		i++;
	}
	return 1;
}
