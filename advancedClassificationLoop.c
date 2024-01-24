#include "NumClass.h"

int isPalindrome(int num){
    int temp = num;
    int ans=0;
    while(temp > 0){
        ans += temp%10;
        ans*=10;
        temp/=10;
    }
    ans /=10;
    return (num==ans) ? 1 : 0;
}

int isArmstrong(int num){
    int temp = num;
    int len = 0;
    int sum = 0;
    while(temp > 0){
        temp /= 10;
        len++;
    }
    temp=num;
    while(temp > 0){
        sum += pow(temp%10,len);
        temp/=10;
    }
    return(sum==num) ? 1 : 0;
}