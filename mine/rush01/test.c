#include <unistd.h>
#include <stdio.h>
char *ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
			if (str[i] < 'A' && str[i] > 'Z' && str[i] < 'a' && str[i] > 'z')
			(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
			i++;
	}
	return (str);
}

int main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un?";
	printf("%s",ft_strcapitalize(a));
	return (0);
}