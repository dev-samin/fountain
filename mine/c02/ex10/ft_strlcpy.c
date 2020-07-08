/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:54:43 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 21:57:18 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	while(i < size)	
	{
		dest[i] = src[i];
		i++;	
	}
	dest[size] = '\0';

	return size - 1;
}
