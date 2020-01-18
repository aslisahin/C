//
//  main.c
//  073
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/07/c-program-to-find-power-of-number-using-for-loop.html

//C program to find power of a number using for loop

#include <stdio.h>

int main(void) {
    int base, exponent,i,number=1;
    
    printf("Enter the base: ");
    scanf("%d",&base);
    
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    
    for (i=1; i<=exponent; i++) {
        number *= base;
    }
    
    printf("%d ^ %d is: %d\n",base,exponent,number);
    
    return 0;
}
