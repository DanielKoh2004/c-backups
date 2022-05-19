#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet (void);

int main ()
{
    char letter='z';
    while(letter >='a')
    {
        write(1,&letter,1);
        letter--;
    }
    return 0;    
    
    
}