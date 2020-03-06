//
//  main.c
//  031
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2016/01/c-program-to-check-lsb-of-number.html

//Write a C program to input any number from user and check whether the Least Significant Bit (LSB) of the given number is set (1) or not (0).

#include <stdio.h>

int main(void) {
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number & 1) {
        printf("LSB of %d is set (1)\n.",number);
    } else {
        printf("LSB of %d is unset (0)\n",number);
    }
    
    
    
    return 0;
}
