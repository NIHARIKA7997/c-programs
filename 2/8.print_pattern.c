
#include <stdio.h>
 
int main() 
{    
   int i,j,n; 
    printf("enter number.of lines:");
    scanf("%d",&n);
    for (i = 0; i<n; i++)
     {
           int  val=i+1;
          for (j = 0; j<(n- i); j++)
          {
              if(i==0)
		printf("%d ",j+1);
 
               if(i>0)
               {
                 if(j==0)
                   printf("%d ", val);
                 else if(j>0 && j<(n-i-1))
                    printf("  ");
                 else
		   printf("%d ",n);
               }
          }
             printf("\n");
     }
 
    return 0;
}