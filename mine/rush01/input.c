/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min <min@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:55:07 by samin             #+#    #+#             */
/*   Updated: 2020/07/12 19:00:48 by min              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char rule[4][4];		//입력된규칙 저장된 전역변수

//에러발생시! error 출력
void error(){
	write(1, "error\n", 6);
	while(1){};
}

/*입력받은 문자 길이*/
int str_len(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return (len);
}


/*문자압축 */
char *str_comp(char *argv[])
{
	char *str;
	int i;
	int strlen;

	str = malloc(sizeof(char) * str_len(argv[1]));
	i = 0;
	strlen = 0;
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] != ' ')
		{
			str[strlen]= argv[1][i];
			strlen++;
		}
		i++;
	}
	free(str);
	return str;
}

/*16개 이상값입력된경우  (숫자 16개 공백 15)*/
int over_less_len(char *str)
{
	int len;
	
	len = str_len(str);
	if(len != 16)
	{
		error();
		return 0;
	}
	else
	{
		return 1;
	}
}

/*1~4까지 숫자 입력 확인*/
int search_onetofour(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= '1' && str[i] <= '4'))
		{
			error();
			return 0;
		}
		i++;
	}
	return 1;
}

/*받아온 문자로 rule[4][4] 생성*/
void build_rule(char *str)
{
	int i = 0;
	int j = 0;
	char idx = 0;



	while(i < 4){
		while(j < 4)
		{
			rule[i][j] = str[idx];
			j++;
			idx++;
		}
		j = 0;
		i++;
	}
}

/*2차원배열로 받은 결과 출력 미완*/
void show_result()
{
	int i;
	int j;

	// char test_map[4][4] = 
	// {{'1','2','3','4'},
	//  {'6','7','8','9'},
	//  {'a','b','c','d'},
	//  {'f','g','h','i'}};

	i = 0;
	while(i < 4)
	{
		j = 0;	
		while(j < 4)
		{
			write(1, &rule[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	char *rule;					//calup,  caldown, rowleft rowdown
	char *str;
	int check[2];

	if(argc == 1)				//사용자로부터 아무것도 입력되지 않을때 error 발생
		error();
	str = str_comp(argv);				//argv로 입력된값 공백 제거
	check[0] = over_less_len(str);		//입력 문자개수 16개인지 확인
	check[1] = search_onetofour(str);	//1~4 이외 값 입력 확인
	if (check[0] + check[1] == 2)		//예외 검사후 게임 실행
	{
		build_rule(str);			//rule[4][4] 생성

//		검사 프로그램 코드 
		show_result();
	}
	else
	{
		return 0;
	}	

	return 0;
}