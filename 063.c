//
//  main.c
//  063
//
//  Created by Ayşıl Simge Karacan on 25.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/how-to-find-first-and-last-digit-of-any-number.html

//C program to find first and last digit of any number

#include <stdio.h>

int main(void) {
    int number,firstDigit,count=0,lastDigit=0;
    
    printf("ENTER a Number: ");
    scanf("%d",&number);
    
    firstDigit = number;
    
    while (firstDigit>=10) {
        count++;
        firstDigit = firstDigit/10;
    }
    
    lastDigit = number%10;
    
    printf("First digit: %d\n",firstDigit);
    printf("Last digit: %d\n",lastDigit);
    
    
    return 0;
}
