//
//  main.c
//  060
//
//  Created by Ayşıl Simge Karacan on 24.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//(Tabular Output) Write a program that uses looping to print the following table of values. Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.

#include <stdio.h>

int main(void) {
    unsigned int i = 1;
    
    printf("N\tN^2\tN^3\tN^4\n");
    
    while (i<=10) {
        printf("%u\t%u\t%u\t%u\n",i,i*i,i*i*i,i*i*i*i);
        i++;
    }

    return 0;
}
