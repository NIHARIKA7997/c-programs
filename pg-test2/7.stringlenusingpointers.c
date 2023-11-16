#include <stdio.h>

int len(char *arr) {
if(arr==NULL) {return 0;}
    int count=0;

 
    while(arr!=NULL)
    {
        arr++;
        count++;
    }
 
return count;
     
}

 

int main() {
    char *arr="Bharat";
    printf("%d",len(arr));
    return 0;
}
