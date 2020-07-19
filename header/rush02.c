#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*로직*/
char	*search_under_hund(int num_i)
{
	int	dict_hund_index;
	int i;
	
	dict_hund_index = find_dict_hund();
	i = 0;
	while (i <= dict_hund_index)
	{
		if (num_i == atoi(dict[i].key);
			return (&dict[i].value);
		i++;
	}
	return (-1);
}

char	*search_over_hund(int div_str)
{
	int	dict_hund_index;
	int	key_len;
	int	key_div;

	dict_hund_index = find_dict_hund() + 1;
	while (dict_hund_index < 41)
	{
		key_len = 0;
		key_len = ft_strlen(&dict[dict_hund_index].key);
		key_div = key_len / 3
		if (div_str == key_div);
			return (&dict[i].value);
	}
	return (-1);
}

void	print_hund(char *str, int digit, int comma)
{
	int		i;
	int		hund_i[3];
	int		dict_hund;
	
	i = 0;
	hund_i = {0, 0, 0};
	while (i < digit)
	{
		hund_i[2 - i] = str[i] - '0';
		i++;
	}
	hund_i[1] *= 10;
	if (hund_i[0] != 0)
	{
		print_value(search_under_hund(hund_i[0]));
		print_value(search_under_hund(100));
	}
	if ((num_i[1] + num_i[2] < 20) && (num_i[1] + num_i[2] > 9))
		print_value(search_under_hund(hund_i[1] + hund_i[2]));
	else if (num_i[1] + num_i[2] > 20)
	{
		print_value(search_under_hund(hund_i[1]));
		print_value(search_under_hund(hund_i[2]));
	}
	else if (num_i[1] == 0 && num_i[0] != 0)
		print_value(search_under_hund(hund_i[2]));
}

char	*print_digit (char *str, int digit, int comma)
{
	print_hund(str, digit);
	if (comma > 0)
		print_value(search_over_hund(comma));
	return (str + digit);
}

int		find_dict_hund(void)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (dict[i].key == "100")
			break;
		i++;
	}
	return (i);
}