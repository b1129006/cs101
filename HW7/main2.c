/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main(){
    double pi = 4.0;
    long ipi = 0;
    for (int i = 1; i<=10000000;i++){
        pi+=(4/(i*2+1))*pow(-1, i);
        ipi = pi*100000;
        if(ipi == 314159){
            printf("%d", i);
            break;
        }
    }
    
    return 0;
}