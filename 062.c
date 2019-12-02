//
//  main.c
//  062
//
//  Created by Ayşıl Simge Karacan on 25.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2016/10/c-program-to-count-number-of-digits-in-number.html

//C program to count number of digits in an integer

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number,count=0;
    
    printf("Give any number: ");
    scanf("%d",&number);
    
    while (number>0) {
        number = number/10;
        count++;
    }
    printf("Total digits: %d\n",count);
    
    return 0;
}
