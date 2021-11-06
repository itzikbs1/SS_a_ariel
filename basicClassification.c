#include <stdio.h>

int isPrime(int x) {
    if(x <= 0)return 0;
    if(x == 1)return 1;
for (int i = 2; i < x; i++){
    if(x%i == 0){
    return 0;
    }
}
return 1;
}

int factorial(int x){
    if(x == 0 || x == 1){
    return 1;
    }
    return x*factorial(x-1);
}

int isStrong(int x) {
    int count;
    int temp=x;
    int sum=0;
    while (temp > 0){
     count = temp%10;
     sum += factorial(count);
     temp = temp/10;
    }      
    if(sum == x){
    return 1;
    }
    return 0;
}
