#include "NumClass.h"

// Declaring functions
int calculateArmstrong(int);

/* will return if a number is Armstrong number
"maatefet" function */
int isArmstrong(int number) {
    return (calculateArmstrong(number) == number) ? 1 : 0;
}

/* will return if a number is a palindrome */
int isPalindrome(int number) {
    int digits = getDigitsNumber(number);
    if (digits == 1)
        return 1;
    if (digits == 2){
        return (getDigit(number,0) == getDigit(number, 1)) ? 1 : 0;
    }
    return isPalindrome((number/10)%(int)(pow(10,digits)));
}


int calculateArmstrong(int number) {
    int digits = getDigitsNumber(number);
    if (digits == 1)
        return number;
    return (number%10) + calculateArmstrong(number/10);
}