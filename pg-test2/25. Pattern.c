/******************************************************************************
1
232
34543
4567654
567898765
 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=5,i=1,j=1,k=1,var=0;
for(;i<=n;i++)
{   var=i;
    for(j=1;j<=i;j++)
    {
        printf("%d",var++);
    }
    --var;
    for(k=1;k<i;k++)
    {
        printf("%d",--var);
    }
    
    printf("\n");
}
    return 0;
}
