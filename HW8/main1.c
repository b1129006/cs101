/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_spaces(int x){
    for (int i = 1; i <= x; i++){
        printf(" ");
    }
}
void print_stars(int x){
    for (int i = 1; i <= x; i++){
        printf(" *");
    }
}


int main(){
    int rows = 10;
    for (int i = 0 ; i < rows ; i++){
        print_spaces(18 - (2 * i));
        print_stars((2 * i) + 1);
        printf("\n");
    }
    return 0;
}
