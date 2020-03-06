//
//  main.c
//  066
//
//  Created by Ayşıl Simge Karacan on 1.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-print-sum-of-all-even-numbers-between-1-to-n.html

//C program to find sum of even numbers between 1 to n

#include <stdio.h>

int main(void) {
    int numb,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&numb);
    
    for (unsigned int i=2; i<=numb; i+=2){
        sum += i;
    }
    
    printf("Sum of even numbers between 1 to the given number: %d\n",sum);
        
    return 0;
}
