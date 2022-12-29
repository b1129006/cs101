/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int rows = 5;
void print_spaces(int r, int rows){
    for(int space = rows; space>rows-r;space--){
    printf(" ");
    }
}

void print_stars(int r){
    
    for (int star = 0; rows-r>star;star++){
        printf(" * ");
    }
}

int main(){
    
    int rows = 5;
    for (int r = 0; r<rows; r++){
        print_spaces(r,rows);
        print_stars(r,rows);
        printf("\n");
    }
    
    return 0;
}
    