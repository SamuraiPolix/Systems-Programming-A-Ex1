#include "NumClass.h"

int isPalindrome(int num){
    int test = num;
    int ans=0;
    while(test > 0){
        ans += test%10;
        ans*=10;
        test/=10;
    }
    ans /=10;
    return (num==ans) ? 1:0;
}

int isArmstrong(int num){
    
    int originNum = num;
    int len = 0;
    int sum = 0;
    while(originNum>0){
        originNum /= 10;
        len++;
    }
    originNum=num;
    while(originNum>0){
        sum += pow(originNum%10,len);
        originNum/=10;
    }
    return(sum==num) ? 1:0;
}