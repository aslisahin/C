//
//  main.c
//  064
//
//  Created by Ayşıl Simge Karacan on 25.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-calculate-sum-of-digits.html

//Program to find sum of digits of a number

#include <stdio.h>

int main(void) {
    int number,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    while (number>0) {
        sum = sum + (number%10);
        number = number /10;
    }
    
    printf("Sum of digits: %d\n",sum);
    
    
    return 0;
}
