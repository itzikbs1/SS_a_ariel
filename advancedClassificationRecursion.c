#include <stdio.h>
#include <math.h>

int checkArm(int x){
    int numOfDigits = (int)log10(x);
    if(x == 0){
    return 0;
    }
 return((pow(x%10, numOfDigits)) + checkArm(x/10));


}

int isArmstrong(int x){
    if (x == checkArm(x)){
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
