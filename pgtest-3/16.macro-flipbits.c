 #include <stdio.h>
#define FLIP_ALL_BITS(num) ((~(num)))

 
int main()
{
    int number, flip_bits;
    printf("Enter the number and number of bits to be flipped");
    scanf("%d %d",&number,&flip_bits);
    unsigned int flipped_number = FLIP_ALL_BITS(number);
    printf("Original number: %u\n", number);
    printf("Flipped number:  %u\n", flipped_number);
    for (int i=0;i<flip_bits;i++)
    {
                number ^= (1 << i);
    }


    printf("%d",number );
}
 