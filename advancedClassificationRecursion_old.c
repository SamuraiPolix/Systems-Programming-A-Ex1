#include "NumClass.h"

// Function-helpers decleration
int isPalindromeRec(int, int);
int isArmstrongRec(int, int,int);
int findNumLength(int,int);

//main function
int isPalindrome(int num){

    return (num == isPalindromeRec(num,0)) ? 1 : 0;
}

//function helper to find if num isPalindrome number
int isPalindromeRec(int num,int sum){
    if(num==0){return sum/10;}

    sum += num%10;
    sum *= 10;

    return isPalindromeRec((num/10), sum);
}

//main function
int isArmstrong(int num){

    return num == isArmstrongRec(num, 0, findNumLength(num, 0));
}

//function helper to find if num isArmstrong number
int isArmstrongRec(int num, int sum, int length){
    if(num == 0){return sum;}

    sum+=pow(num%10,length);

    return isArmstrongRec(num/10, sum , length);
}
//find the n-length of num
int findNumLength(int num, int length){
    if(num==0){return length;}

    return findNumLength(num/10,length+1);
}
