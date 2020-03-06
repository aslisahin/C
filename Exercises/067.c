//
//  main.c
//  067
//
//  Created by Ayşıl Simge Karacan on 1.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-print-table-of-any-number.html

//C program to print multiplication table of a given number

#include <stdio.h>

int main(void) {
    int numb;
    
    printf("Enter a number: ");
    scanf("%d",&numb);
    
    for (unsigned i = 1; i<=numb ; i++) {
        printf("%d x %d :\t%d\n",numb,i,numb*i);
    }
    
    
    return 0;
}
