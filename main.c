#include "NumClass.h"

void printPrimes(int num1, int num2) {
    for (int i = num1; i <= num2; i++){
        if (isPrime(i))
            printf("%d ", i);
    }
}

void printArmstrongs(int num1, int num2) {
    for (int i = num1; i <= num2; i++){
        if (isArmstrong(i))
            printf("%d ", i);
    }
}

void printStrongs(int num1, int num2) {
    for (int i = num1; i <= num2; i++){
        if (isStrong(i))
            printf("%d ", i);
    }
}

void printPalindromes(int num1, int num2) {
    for (int i = num1; i <= num2; i++){
        if (isPalindrome(i))
            printf("%d ", i);
    }
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    if (num2 < num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printPrimes(num1, num2);
    printf("\n\n");
    printArmstrongs(num1, num2);
    printf("\n\n");
    printStrongs(num1, num2);
    printf("\n\n");
    printPalindromes(num1, num2);
    printf("\n\n");

    return 0;
}
