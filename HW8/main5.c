/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_top(){
    printf("X'mas tree!\n");
}

void print_trunk(){
    for (int i = 0; i < 5; i++){
        printf("       *\n");
    }
}

void print_spaces(int x){
    for (int i = 0; i < x; i++){
        printf(" ");
    }
}

void print_stars(int x){
    for (int i = 0; i < x; i++){
        printf("*");
    }
}

int main(){
    print_spaces(3);
    print_top();
    
    for (int i = 0; i < 3; i++){
        print_spaces(8 - i - 1);
        print_stars(2 * i + 1);
        printf("\n");
    }
    for (int i = 0; i < 5; i++){
        print_spaces(8 - i - 1);
        print_stars(2 * i + 1);
        printf("\n");
    }
    for (int i = 0; i < 7; i++){
        print_spaces(8 - i - 1);
        print_stars(2 * i + 1);
        printf("\n");
    }
    print_trunk();
    
    return 0;
}