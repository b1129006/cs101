/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int round_func(float f){
    f += 0.5;
    return f;
}

int main(){
    float f = 1.4;
    round_func(f);
    printf("%d", round_func(f));
    return 0;
}