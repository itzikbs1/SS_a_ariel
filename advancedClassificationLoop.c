#include <stdio.h>
#include <math.h>


int length_of_the_number(int x){
    int count=0;
    while(x>0){
        count++;
        x=x/10;
    }
    return count;
}

int isArmstrong(int x) {
    int count;
    int temp=x;
    int sum=0;
    int len = log10(x)+1;
    while (temp > 0){
        count = temp%10;
        sum += pow(count, len);
        temp = temp/10;
    }
    if (sum == x)
        return 1;
    return 0;
}


int isPalindrome(int x){
    int count;
    int temp=x;
    int sum=0;

    while (temp > 0){
        count = temp%10;
        sum = sum*10 + count;
        temp = temp/10;
    }
    if (sum == x)
        return 1;
    return 0;
}
