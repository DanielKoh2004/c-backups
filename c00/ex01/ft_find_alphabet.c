#include <stdio.h>
#include<unistd.h>

void ft_print_alphabet(void);

int main ()
{
    char letter='a';
    while(letter <= 'z')
    {
        write(1,&letter,1);
        letter++;
    
    }
    return 0;
}