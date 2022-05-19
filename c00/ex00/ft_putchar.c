#include<unistd.h>

void ft_putchar(char c);

int main(){
    ft_putchar('H');
    ft_putchar('D');
    ft_putchar('Y');
    return 0;
}

void ft_putchar(char c){
        write(1, &c, 1);
            return;

}