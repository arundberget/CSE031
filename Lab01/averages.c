#include <stdio.h>
#include <stdbool.h>

int digitSum(int n) { // helper for calculating sum of digits
    int sum = 0;
    if (n < 0) { // make positive if negative
        n *= -1;
    }

    while (n > 0) { // sum up digits
        sum += n % 10;
        n /= 10; // remove last digit
    }
    return sum;
}

int main() {
    int input;
    int num = 1; // start with first number
    int sumEven = 0;
    int sumOdd = 0;
    int countEven = 0;
    int countOdd = 0;

    printf("Enter the %dst value: ", num);
    scanf("%d", &input);

    if (input == 0) {
        printf("\nThere is no average to compute.\n");
        return 0;
    }

    while (input != 0) { // loop until user enters 0
        int dSum = digitSum(input); // use helper to calculate sum of digits

        if (dSum % 2 == 0) { // check if sum is even or odd and update respective sum and count
            sumEven += input;
            countEven++;
        } else {
            sumOdd += input;
            countOdd++;
        }
        num++; // incr num

        if (num % 10 == 1 && num != 11) {
            printf("Enter the %dst value: ", num);
        } else if (num % 10 == 2 && num != 12) {
            printf("Enter the %dnd value: ", num);
        } else if (num % 10 == 3 && num != 13) {
            printf("Enter the %drd value: ", num);
        } else {
            printf("Enter the %dth value: ", num);
        }

        scanf("%d", &input);
    }

    if (countEven > 0) { // check for even sum and calculate average
        double avgEven = (double) sumEven / countEven;
        printf("Average of inputs whos digits sum up to an even number: %.2f\n", avgEven);
    }

    if (countOdd > 0) { // check for odd sum and calculate average
        double avgOdd = (double) sumOdd / countOdd;
        printf("Average of inputs whos digits sum up to an odd number: %.2f\n", avgOdd);
    }

    return 0;
}