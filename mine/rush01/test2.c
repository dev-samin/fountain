#include<unistd.h>
#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int *start_point;
    int *last_point;
    int savebox;
    int counter;
    
    counter = 0;
    start_point = tab;
    while (counter < size / 2)
    {
        savebox = *tab;
        last_point = start_point + ((size - counter) - 1);
        *tab = *last_point;
        *last_point = savebox;
        counter++;
        tab++;
    }
    counter = 0;
    while(counter < size)
    {
        printf("%d", tab[counter]);
        counter++;
    }
}

int main()
{   
    int a[] = {9,8,7,6,5,4,3,2,1,0};
    ft_rev_int_tab(a, 10);
    return 0;
}