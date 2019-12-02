//
//  main.c
//  068
//
//  Created by Ayşıl Simge Karacan on 1.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2016/10/c-program-to-count-number-of-digits-in-number.html

//C program to count number of digits in an integer

#include <stdio.h>

int main() {
    int numb;
    unsigned int count=1;
    
    printf("Give a number: ");
    scanf("%d",&numb);
    
    while (numb>10) {
        count++;
        numb /= 10;
    }
    printf("Number of digits: %d\n",count);
    
    
    
    return 0;
}
