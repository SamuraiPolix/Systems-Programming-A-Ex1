#include "NumClass.h"

/* will return if a number is Armstrong number
An Armstrong number is an bndigit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int number) {
    int digits = getDigitsNumber(number);
    int sum = 0;
    for (int i = 0; i < digits; i++){
        sum += pow(getDigit(number, i), digits);
    }
    return sum == number ? 1 : 0;
}

/* will return if a number is a palindrome */
int isPalindrome(int number) {
    int digits = getDigitsNumber(number);
    for (int i = 0; i <= digits/2; i++){
        if (getDigit(number, i) != getDigit(number, digits-i))
            return 0;
    }
    return 1;
}