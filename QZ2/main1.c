/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void print_space(int r, int rows){
    for (int i = 0; i<r; i++){
        printf("  ");
    }
}

void print_stars(int r){
    for (int i = 0; i<r; i++){
        printf("* ");
    }
}


int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        print_space(i, rows);
        print_stars(2*(rows-i)-1);
        printf("\n");
    }
    
    
    return 0;
}












