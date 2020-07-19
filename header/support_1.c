#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/*문자출력*/
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
/*문자열 배열에 복사*/
char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

//키값 벨류값 분리
void trim_word(struct dict_data *dict, char *str, int i)
{
    int len;
    int vlen;
    char key[38];
    char value[15];

    len = 0;
    vlen = 0;
    while (str[len] != ':')
    {
        if (str[len] >= '0' && str[len] <= '9')
        {
            dict[i].key[len] = str[len];
            // dict[idx].key = &str[idx][len];
        }
        len++;
    }
    while (str[len] != '\0')
    {
        if ((str[len] >= 'a' && str[len] <= 'z') || (str[len] >= 'A' && str[len] <= 'Z'))
        {
            dict[i].value[vlen] = str[len];
            //data[idx].value = &str[idx][len];
            vlen++;
        }
        len++;
   }
    //dict[i].value[vlen] = '\0';
    //ft_strcpy(dict[i].key, key);
    //ft_strcpy(dict[i].value, value);
    printf("%s\n", dict[i].value);
    
}

//글자 길이 확인, 입력 관련 에러 모음
int check_num(char *num)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(num);
    if (len > 38)
    {
        write(1, "Error\n", 7);
        return (0);
    }
    while (num[i])
    {
        if (num[0] == '0' && num[1] == '0')
        {
            write(1, "Error\n", 7);
            return (0);
        }
        i++;
    }
    i = 0;
    while (num[i])
    {
        if (num[i] < '0' || num[i] > '9')
        {
            write(1, "Error\n", 7);
            return (0);
        }
        i++;
    }
    return (1);
}