#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // If the reversed number is equal to the original number, it's a palindrome
    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}

// Function to check if a string is a palindrome
int isStringPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    // Initialize pointers for start and end of the string
    i = 0;
    j = length - 1;

    // Compare characters from both ends moving towards the center
    while (i < j) {
        // Ignore non-alphanumeric characters
        while (!isalnum(str[i]) && i < j) {
            i++;
        }
        while (!isalnum(str[j]) && i < j) {
            j--;
        }

        // Case-insensitive comparison of characters
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; // Not a palindrome
        }

        i++;
        j--;
    }

    return 1; // Palindrome
}

int main() {
    int choice, num;
    char str[100];

    printf("Enter 1 to check palindrome for a number, or 2 for a string: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isNumberPalindrome(num)) {
                printf("%d is a palindrome.\n", num);
            } else {
                printf("%d is not a palindrome.\n", num);
            }
            break;
        case 2:
            printf("Enter a string: ");
            scanf("%s", str);
            if (isStringPalindrome(str)) {
                printf("%s is a palindrome.\n", str);
            } else {
                printf("%s is not a palindrome.\n", str);
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
