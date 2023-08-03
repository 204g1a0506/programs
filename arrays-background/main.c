/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[5];
    printf("%d\n",sizeof(a));//10 size of datatype*len of std
    printf("%d\n",sizeof(a[0]));//2 size of datatype
    printf("%u\n",a);//100 a[0] base adress
    printf("%u\n",&a);//100 whole array base address
    printf("%u\n",a+1);//102 +1 for base address
    printf("%u\n",&a+1);//110 whole array next +1
    //printf("%u\n",*(a+1));//0

    return 0;
}

