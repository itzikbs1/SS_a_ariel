#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){
    int x,y;
    printf(" Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    
    if(x > y){
        int temp = x;
        y = x;
        x = temp;
    }

    printf("The Armstrong numbers are:");
     for (int i = x; i <= y; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d",i);
         }
    }
        printf("\n");
        printf("The Palindromes are:");
     for (int i = x; i <= y; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d",i);
         } 
    }
        printf("\n");
        printf ("The Prime numbers are:");
    for (int i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            printf("%d",i);
         }
    }
        printf("\n");
        printf("The Strong numbers are:");
     for (int i = x; i <= y; i++)
    {
        if (isStrong(i))
        {
            printf("%d",i);
         }
    }
        printf("\n");
        return 0;
}
