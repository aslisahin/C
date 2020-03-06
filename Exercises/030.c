//
//  main.c
//  032
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//https://codeforwin.org/2016/01/c-program-to-check-most-significant-bit-of-number-is-set-or-not.html

//Write a C program to input any number from user and check whether Most Significant Bit (MSB) of given number is set (1) or not (0).

#include <stdio.h>

int main(void) {
    int number,bits,MSB;
    
    printf("Enter the number: ");
    scanf("%d",&number);
    
    bits = sizeof(number) * 8;
    
    MSB = 1 << (bits - 1);
    
    
    if (number & MSB) {
        printf("MSB of %d is set (1).",number);
    } else {
        printf("MSB of %d is unset (0)",number);
    }
    
    return 0;
}
