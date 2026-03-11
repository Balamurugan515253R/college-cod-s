#include<stdio.h>
int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Function to check if a number is a palindrome
int is_palindrome(int n) {
    return n == reverse(n);
}

int main() {
    int num, rev, sum, i;

    printf("Enter a 2 or 3 digit number: ");
    scanf("%d", &num);

    if(num < 10 || num > 999) {
        printf("Please enter a valid 2 or 3 digit number.\n");
        return 0;
    }

    printf("Starting number: %d\n", num);

    for(i = 1; i <= 5; i++) {
        rev = reverse(num);
        sum = num + rev;
        printf("Iteration %d: %d + %d = %d\n", i, num, rev, sum);

        if(is_palindrome(sum)) {
            printf("Palindrome found: %d at iteration %d\n", sum, i);
            break;
        }
        num = sum; // Continue with the new sum
    }

    if(i > 5) {
        printf("No palindrome found within 5 iterations.\n");
    }

    return 0;
}


