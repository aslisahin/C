//
//  main.c
//  077
//
//  Created by Ayşıl Simge Karacan on 8.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Write a C program to check whether a given number is binary. (Hint in lastDigit=0, c=0, num, b;)


#include <stdio.h>

int main(void) {
    int lastDigit, number, b,count1=0, count2=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    b = number;
    
    while (number!=0) {
        lastDigit = number % 10;
        number /= 10;
        count1++;
        
        if (lastDigit!=1 && lastDigit!=0) {
            printf("%d is not a binary number\n",b);
            break;
        } else {
            count2++;
        }
        
    }
    
    if (count1 == count2) {
        printf("%d is a binary number\n",b);
    }
    
    
    
    
    return 0;
}
