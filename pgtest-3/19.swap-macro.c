 #include <stdio.h>

#define macro_swap(num1,num2) {(num1^=num2);(num2^=num1);   (num1^=num2); } 

 
int main()
{
    int num1, num2;
    printf("Enter the numbers");
    scanf("%d %d",&num1,&num2);
    printf("BEFORE SWAP");
    printf("%d %d", num1, num2);
    macro_swap(num1,num2);
    printf("AFTER SWAP");
    printf("%d %d", num1, num2);
}
 