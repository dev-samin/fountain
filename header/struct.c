char	*buf_row(char *buf, int row) //인자로 buf포인터와 row를 받고 row에 원하는 행을 입력하면 해당 행의 포인터 주소 반환
{
	if (row == 0)
	{
		printf("%s", buf);
		return (buf);
	}
	else
	{
		while (*buf != '\n')
			buf++;
		buf_row(buf + 1, row - 1);
		//printf("%s \n", buf);
	}
	return (" ");
}

char *dict_to_buf(void) //numbers.dict 내용을 buf 변수에 넣고 buf의 포인터 반환  
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


//buf에 있는 내용을 행별로 배열에 저장
char *cut_article(char *buf, char **tmp)
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
        printf("%s  %d\n", tmp[1], colcnt );
    }
    return " ";
}