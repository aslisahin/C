//
//  main.c
//  035
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-check-whether-number-is-divisible-by-5-and-11.html

//Write a C program to check whether a number is divisible by 5 and 11 or not using if else.

#include <stdio.h>

int main(void) {
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number % 5 == 0 && number % 11 == 0) {
        printf("Number is divisible by 5 and 11.\n");
    } else {
        printf("Number is not divisible by 5 and 11.\n");
    }

    return 0;
}
