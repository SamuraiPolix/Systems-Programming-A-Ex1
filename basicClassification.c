#include "NumClass.h"
#include <math.h>

// Declaring helper functions
int getFactorial(int);

int isStrong(int num){
    int digit, sum = 0;
    int originNum = num;
    while(num > 0){
        digit = num%10;
        sum += getFactorial(digit);
        num /= 10;
    }
    return (sum == originNum) ? 1 : 0;
}

int isPrime(int num){
    if(num == 1 || num == 2){
        return 1;
    }
    int i=2;
    while(i<=sqrt(num)){
        if(num%i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int getFactorial(int num) {
    int factorial = 1;
    for(int i=1;i<=num;i++){
        factorial *= i;
    }
    return factorial;
}