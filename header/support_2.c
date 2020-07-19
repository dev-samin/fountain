#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*문자길이출력*/
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void	print_value(char *value)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(value);
	while (i <= len)
	{
		write(1, &value[i], 1);
		write(1, " ", 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int	i;
	int counter;
	int result;

	i = 0;
	counter = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			counter *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * counter);
}

int		print_numbers_in_alpha(char *av)
{
	int		av_size;
	int		hund_digit;
	int		hund_comma;

	av_size = ft_strlen(av);
	hund_digit = av_size % 3;
	hund_comma = av_size / 3;
	if (hund_digit == 0)
		hund_comma -= 1;
	if (av_size == 1)
		if(atoi(av) == 0)
			print_value(&dict[0].value);
	else
	{	
		while (*av = '\0')
		{
			av = print_digit(av, hund_digit, hund_comma);	
			hund_digit = 3;
			hund_comma -= 1;
		}
	}
	return (0);
}

void initcheck(int argc)
{
    if (argc > 3 || argc == 1)
    {
        ft_putstr("Error\n");
        return;
    }
    else if (argc == 2)
    {
    }
}

