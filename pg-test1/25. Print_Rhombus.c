/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int temp=0,num=0 ;
    int I=0,J=0;,
    for(int i=0;i<=4;i++)
    {
        if(i<0) I=-i
        else    I=i
        for (int j=-4;j<=4;j++)  
        {
            if(j<0) J=-j
            else     J=j;
            if(I<=J) printf("%d",I+1);
	    else     printf(" ");
        }
        printf("\n");
    }
    I=0,J=0;
   for(int i=-3;i<=0;i++)
    {
        if(i<0) I=-i
        else     I=i
        for (int j=-4;j<=4;j++)  
        {
            if(j<0)  J=-j
            else      J=j;
            if(I<=J) printf("%d",J+1);
	    else     printf(" ");
		
        }
        printf("\n");
    }

    return 0;
}
    