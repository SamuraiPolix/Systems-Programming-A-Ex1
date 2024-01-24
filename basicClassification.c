#include <math.h>
#include <stdbool.h>
#include "NumClass.h"

int isStrong(int num){
    
    int digit, temp = 1, sum = 0;
    int originNum = num;
    while(num > 0){
        digit = num%10;
        for(int i=1;i<=digit;i++){
            temp *= i;
        }
        sum+=temp;
        temp=1;
        num/=10;
    }
    if(sum == originNum){
        return 1;
    }
    else{
        return 0;
    }
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