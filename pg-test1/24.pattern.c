/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int var1=1,sum=0,var0=0,range=4  ;
    for (int i=1;i<=range;i++)
    {
        
        for(int j=0;j<i;j++)
        {
            sum=var1+var0;
            var0=var1;
            var1=sum;
            printf("%d\t",var0);
        }
        printf("\n");
        
        
    }
}
    