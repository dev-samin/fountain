/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:55:09 by samin             #+#    #+#             */
/*   Updated: 2020/07/08 19:51:42 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int i;
	i = 1;
	if(str[0] >= 97 && str[0] <= 122)
		str[0] -= 32; 

	while(str[i] != '\0')
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z') 
			   	&& !(str[i] >= 'a' && str[i] <= 'z')
			   	&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32; 
		}

		i++;
	}

	return str;
}

int main()
{
	char a[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	int m = 0;

	ft_strcapitalize(a);

	printf("%s",	ft_strcapitalize(a));

	return 0;
}
