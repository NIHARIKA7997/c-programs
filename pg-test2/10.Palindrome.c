#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isalnum1(char a)
{
	if(a>=65&&a<=97)
		return 1;
	else
		return 0;

}
int isPalindrome(const char *str) {
    int len = strlen(str);
    int i, j = len - 1;

    for (i = 0; i < j; i++, j--) {
        while ( !isalnum1(str[j]) && i < j)) {
            i++;
        }
        while (!isalnum1(str[j]) && i < j) {
            j--;
        }

        if ( (str[i]) !=  (str[j])) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isPalindrome(input)) {
        printf("The input is a palindrome.\n");
    } else {
        printf("The input is not a palindrome.\n");
    }

    return 0;
}
