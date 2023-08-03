/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5],i,max=a[0],min=9,n;
    printf("Enter elements of u r cjoice");
    scanf("%d",&n);
    printf("Eter %d elem",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("max value :%d\n",max);
    printf("min value: %d",min);
    return 0;
}
