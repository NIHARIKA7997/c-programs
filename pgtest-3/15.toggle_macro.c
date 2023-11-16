// 15. macro to toggle nth bit 
#include <stdio.h>

#define toggle(num,pos) (num^(1<<pos-1))

int main()
{
    int result= toggle(10,2);
    printf("%d",result);
}
 