#include<stdio.h>

void main()
{
    int row=1,Index=0;
    int j=0;
    for(int index=1;index<=6;index++)
    {
        if(index%2==0)
        {
            j=1;
            for (; j<=index ;j=j+2)
            {
            printf("* ");

            }
        }
        else 
        {
            j=2;
            
            for (; j<=index ;j=j+2)
            {
                printf(" *");
            }
        }
        
        printf("\n");
    }
    
    
    for(int index=4;index<=0;index++)
    {
    
    
}