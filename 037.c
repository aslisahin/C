//
//  main.c
//  037
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-check-negative-positive-zero.html

//Write a C program to check positive, negative or zero using simple if or if else.

#include <stdio.h>

int main(void) {
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number>0) {
        printf("%d is positive.\n",number);
    } else if (number<0) {
        printf("%d is negative.\n",number);
    } else {
        printf("%d is zero.\n",number);
    }
    
    
    return 0;
}
