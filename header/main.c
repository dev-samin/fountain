#include "rush02_.h"


int main(int argc, char *argv[])
{
    //initcheck(argc);
    //check_num(argv[1]);
    char str[12][10] = {"0: zero", "1: one", "2: two", "3: three", "4: four", "5: five", "6: six", "7: seven", "8: eight", "9: nine", "10: ten", "11: eleven"};
    char **nbnarray;
    //struct dict_data *dict;
    int i;
    char *a;
    char *buf;
    int height;
    int width;
    int idx;

    height = 43;
    width = 100;
    idx = 0;

    nbnarray = (char **) malloc( sizeof(char*)*height);
    while(idx < height)
    {
        nbnarray[idx] = (char *) malloc( sizeof(char)*width);
        idx++;
    }
    
    i = 0;
    dict = malloc(sizeof(struct dict_data) * 41);
    //build_nbn_array(str2, 41, 30);
    buf = dict_to_buf();
    cut_article(buf, nbnarray);

    while (i < 41)
     {
         trim_word(dict, str[i], i);
         i++;
    }

    //printf("%s\n", dict[1].value);
    return 0;
}