#include "NumClass.h"

int getFactorial(int);


/* will return if a number is prime */
int isPrime(int number) {
    // We are running until the square root of number (no need to run until the number itself),
    // if divider is found, return false, otherwise, we get to the sqrt and no divider was found ,return true.
    int numberSqrt = (int)(sqrt(number));
    for (int i = 2; i < numberSqrt; i++){
        if (number % i == 0)
            return 0;
    }
    return 1;
}

/* Strong number is a special number whose sum of the factorial of digits is equal to the original number.
For Example: 145 is a strong number
1! + 4! + 5! = 145
*/
int isStrong(int number) {
    int digits = getDigitsNumber(number);
    int sum = 0;
    for (int i = 0; i < digits; i++) {
        sum += getFactorial(((int)(number/pow(10, i)) % 10));
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

/* return the number of digits the given number has */
int getDigitsNumber(int number) {
    int count = 1;
    while (number < 10){
        count++;
        number /= 10;
    }
    return count;
}

/* returns the factorial of the given number */
int getFactorial(int number) {
    int factorial = 1;
    for (int i = 2; i <= number; i++){
        factorial *= i;
    }
    return factorial;
}


int getDigit(int number, int digit) {
    return ((int)(number/pow(10, digit)) % 10);
}