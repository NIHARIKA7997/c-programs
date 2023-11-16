/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=0;
    }
    int my_input_arr[]= {1,2,4,6,7,8,9,1,2,3,0};
    int len= sizeof(my_input_arr)/sizeof(my_input_arr[0]);
    for(int i=0; i<len;i++)
    {
        arr[my_input_arr[i]]+=1;
    }
    printf("OUTPUT is \n");
    for(int i=0; i<10;i++)
    {
        printf("%d \t %d \n", i ,arr[i]);
    }
    
    
    

    return 0;
}
