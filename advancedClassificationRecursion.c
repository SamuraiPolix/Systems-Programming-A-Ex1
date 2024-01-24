#include "NumClass.h"

int calculateArmstrong(int);

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
// "maatefet" function
int isArmstrong(int number) {
    if (calculateArmstrong(number) == number)
        return 1;
    else
        return 0;


}

/* will return if a number is a palindrome */
int isPalindrome(int number) {
    int digits = getDigitsNumber(number);
    if (digits == 1)
        return 1;
    if (digits == 2){
        if (getDigit(number,0) == getDigit(number, 1))
            return 1;
        else
            return 0;
    }
    return isPalindrome((number/10)%(int)(pow(10,digits)));
}


int calculateArmstrong(int number) {
    int digits = getDigitsNumber(number);
    if (digits == 1)
        return number;
    return number%10 + calculateArmstrong(number/10);
}