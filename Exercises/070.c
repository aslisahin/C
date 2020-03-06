//
//  main.c
//  070
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-find-reverse-of-any-number.html

//C program to find reverse of a number

#include <stdio.h>

int main(void) {
    int number, digit=0, reverse=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    while (number!=0) {
        
        digit = number % 10;
        
        reverse = (reverse * 10) + (digit);
        
        number = number / 10;
    }
    
    printf("Reversed number: %d\n",reverse);
    
    return 0;
}
