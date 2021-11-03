#include <stdio.h>
#include "NumClass.h"
#include "basicClassification.c"
// #include "advancedClassificationRecursion.c"
#include "advancedClassificationLoop.c"

void main(){
    int x,y;
    printf(" Enter the first number: ");
    // printf("\n");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);

        printf("The Armstrong numbers are:");
     for (int i = x; i <= y; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d",i);
         }
    }
        printf("\n");
        printf("The Palindrome numbers are:");
     for (int i = x; i <= y; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d",i);
         } 
    }
        printf("\n");
        printf ("the Prime numbers are: ");
    for (int i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            printf(" %d",i);
         }
    }
        printf("\n");
        printf("The Strong numbers are:");
     for (int i = x; i <= y; i++)
    {
        if (isStrong(i))
        {
            printf(" %d",i);
         }
    }
        printf("\n");
}