#ifdef RUSH02_H
#define RUSH02_H
/*딕셔너리 벨류 구조체*/
typedef	struct	dict_data
{
    char key[37];
    char value[12];
}dict_data;

int 	ft_strlen(char *str);
void	ft_putstr(char *str);
void 	print_value(char *value);
void 	trim_word(struct dict_data *dict, char *str, int i);
int 	check_num(char *num);
void 	initcheck(int argc);
char 	*buf_row(char *buf, int row);
char 	*dict_to_buf(void);
char 	*cut_article(char *buf, char **tmp);
int 	build_nbn_array(char **nbnarray, int height, int width);
int		ft_atoi(char *str);
char	*search_under_hund(int num_i);
char	*search_over_hund(int div_str);
void	print_hund(char *str, int digit, int comma);
char	*print_digit (char *str, int digit, int comma);
int		find_dict_hund(void);
int		print_numbers_in_alpha(char *av);

#endif