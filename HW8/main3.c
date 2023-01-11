/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int n =  19;
    unsigned int mask = 1 << 31;
    for (int i = 0; i < 32; i++){
        printf("%d", n&mask&&1);
        mask >>= 1;
        if ((i+1) % 4 == 0){
            printf(" ");
        }
    }
    
    return 0;
}
