/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int var=2,temp, odd=1,even=2;
    int row=10;
    for(int i=1;i<=row;i++)
    {
        if(i%2==0) {
            temp=even;
        }
        else {
            temp =odd;
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",temp);
            temp=temp+var;
                
        }
        printf("\n");
    }

    return 0;
}
    