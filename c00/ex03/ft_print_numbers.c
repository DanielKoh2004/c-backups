#include <stdio.h>
#include <unistd.h>

void ft_print_numbers (void);
int main()
{
    int number='0';
    while(number <= '9')
    {
        write(1,&number,1);
        number++;
    }
    return 0;
}