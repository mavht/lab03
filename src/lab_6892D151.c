#include <stdio.h>

long calculate_factorial(int number )
{
    // TODO: write your code here
}

// DO NOT change the code below
#ifndef ___TEST___
int main() {
    int number =- 1;
    long result = -1;

    printf("Input a positive integer: ");
    scanf("%d", &number);
    result = calculate_factorial(number);
    if ( result < 1 ) 
    {
        printf("The number inputted should be between 1 and 20.\n");
    }
    else
    {
        printf("Factorial: %ld\n", calculate_factorial(number));
    }
    return 0;
}
#endif