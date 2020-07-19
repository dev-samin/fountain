/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:32:42 by samin             #+#    #+#             */
/*   Updated: 2020/07/19 23:26:40 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_.h"

int		main(int argc, char *argv[])
{
    char	 **nbnarray;
    int		 i;
    char	 *a;
    char	 *buf;
    int		 height;
    int		 width;
    int		 idx;

	if (argc != 2)
		return (0);
    height = 43;
    width = 100;
    idx = 0;
	if (argc != 2)
		return (0);
   	check_num(argv[1]);
    nbnarray = (char **) malloc(sizeof(char*) * height);
    while (idx < height)
    {
        nbnarray[idx] = (char *) malloc(sizeof(char) * width);
        idx++;
    }
    i = 0;
    dict = malloc(sizeof(struct dict_data) * 41);
    buf = dict_to_buf();
    cut_article(buf, nbnarray);
    while (i < 41)
    {
         trim_word(dict, str[i], i);
         i++;
    }
	if (print_numbers_in_alpha(argv[1] != 0))
		return (0);
	i = 0;
	while(i < height)
	{
		free(nbnarray[i]);
		i++;
	}
	free(nbnarray);
	free(dict);
    return (0);
}
