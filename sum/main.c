/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[50],n,i,ec=0,es=0,oc=0,os=0;
    printf("Eneter how many values u want");
    scanf("%d",&n);
    printf("Enter %d elem",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    if(a[i]%2==0){
        ec++;
        es=es+a[i];
    }
    else{
        oc++;
        os=os+a[i];
    }
    }
    printf("%d %d %d %d",ec,es,oc,os);

    return 0;
}
