/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int i = 15;
    int sum = 0;
    while(i != 0){
        if(i % 2 == 1){
            sum+=1;
        }
        i/=2;
    }
    printf("%d", sum);
    
    return 0;
}




