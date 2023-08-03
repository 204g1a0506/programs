/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=100,b=200,c,*p,*q,*r,**x,**y,**z;
    p=&a;q=&b;r=&c;x=&p;y=&q;z=&r;
    **z=*p;
    *p=**y;
    *q=*r;
    printf("%d%d",a,b);
    printf("%d%d",*p,*q);
    printf("%d%d",**x,**y);

    return 0;
}
