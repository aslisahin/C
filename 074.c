//
//  main.c
//  074
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-print-factors-of-any-number.html

//C program to find all factors of a number

#include <stdio.h>

int main(void) {
    int number,i;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    printf("Factory of %d : ",number);
    
    for (i=1; i<=number; i++) {
        
        if (number % i == 0) {
            printf("%d ",i);
        }
    }
    
    
    return 0;
}
