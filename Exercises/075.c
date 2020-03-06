//
//  main.c
//  075
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-calculate-factorial-of-any-number.html

//C program to find factorial of a number

#include <stdio.h>

int main(void) {
    int number,i,factorial=1;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    for (i=1; i<=number; i++) {
        factorial *= i;
    }
    
    printf("Factorial of the %d is %d\n",number,factorial);
    
    
    return 0;
}
