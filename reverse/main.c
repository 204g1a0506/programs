/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,rev=0,rem,*p,*q,*r;
    p=&n;q=&rev;r=&rem;
    printf("Enter n  val");
    scanf("%d",&n);
    while(n!=0){
        *r=*p%10;
        *q=*q*10+rem;
        *p=*p/10;
    }
    printf("reverse %d",*q);
    return 0;
}
