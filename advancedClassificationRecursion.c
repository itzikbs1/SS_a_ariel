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
int power(int x, int y){
    if (y == 0){
        return 1;
    }
    return x*power(x, y-1);
}

int isArmstrong(int x){
     int digits = length_of_the_number(x);
        int sum = 0;
        int temp = x;
        int count = 0;
        while(temp > 0){
            count = temp % 10;
            temp = temp / 10;
            sum += power(count,digits);   
        }
        if(sum == x){
            return 1;
        }
        return 0;
}

int checkPal(int x){
    int numOfDigits = (int)log10(x);
    if(x == 0){
    return 0;
    }
    return((x%10 * pow(10, numOfDigits)) + checkPal(x/10));
}

int isPalindrome(int x){
   if(x == checkPal(x)){
       return 1;
   }
   return 0;
}
