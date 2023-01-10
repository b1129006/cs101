/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int i = 12345;
    int digit = i % 10;
    int thousand = (i/1000)%10;
    printf("%d", i-(thousand*1000)-digit+(digit*1000)+thousand);
    
    return 0;
}


