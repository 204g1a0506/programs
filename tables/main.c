/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[50],n,i,j;
    printf("Enter no:");
    scanf("%d",&n);
    printf("Enter the elements %d:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        for(i=1;i<=10;i++){
            for(j=0;j<n;j++){
            printf("%d * %d = %d \t",a[j],i,a[j]*i);
        }
        printf("\n");
    }

    return 0;
}
