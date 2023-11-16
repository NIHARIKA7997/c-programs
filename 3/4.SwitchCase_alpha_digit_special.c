#include<stdio.h>

void isdigit_alphabet(ch){
    switch(ch){
        case 65 ... 97:
            printf("aLPHaBETS");
            break;
        case '0' ... '9':
            printf("DIGITS");
            break;
        default:
            printf("Special characters");
            break;
    }
}

void main()
{
    isdigit_alphabet('1');
}
    