/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int var=0, var1=1,sum=0;
   
    int n;
    scanf("%d",&n);

    for(int i=2 ; i<n;i++)
    {
        sum=var+var1;
        printf("%d\t",var);
        var=var1;
        var1=sum;
    }
    
}
