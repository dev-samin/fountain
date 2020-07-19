/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samin </var/mail/samin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:19:40 by samin             #+#    #+#             */
/*   Updated: 2020/07/19 23:31:09 by samin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <rush02.h>
#include <fcntl.h>

char	*buf_row(char *buf, int row)
{
	if (row == 0)
	{
		return (buf);
	}
	else
	{
		while (*buf != '\n')
			buf++;
		buf_row(buf + 1, row - 1);
	}
	return (" ");
}

char	*dict_to_buf(void)  
{
	int fd;
	int r;
	char *buf;
	if (0 > (fd = open("numbers.dict", O_RDONLY)))
		return 0;
	buf = (char *)malloc(sizeof(char) * 2048);
	if (buf == (void *)(0))
		return (0);
	if (0 > (r = read(fd, buf, 2048)))
		return (0);
	close(fd);
	return (buf);
}

void	cut_article(char *buf, char **tmp)
{
    int i;
    int colcnt;
    int rowcnt;

    i = 0;
    rowcnt = 0;
    colcnt = 0;
       
    while(buf[i] != '\0')
    {
        if(buf[i] == '\n')
        {
            tmp[rowcnt][colcnt] = '\0';
            buf++;
            rowcnt++;
            colcnt = 0;
        }
        tmp[rowcnt][colcnt] = buf[i];
        colcnt++;
        i++;
    }
}
