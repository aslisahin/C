//
//  main.c
//  042
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-print-week-name.html

//Program to print day name of week using array constant

#include <stdio.h>

int main(void) {
    const char * WEEKS[] = {"Monday","Tuesday","Wednsday","Thursday","Friday","Saturday","Sunday"};
    
    int week;
    
    printf("Enter a week number (1-7): ");
    scanf("%d",&week);
    
    if (week>0 && week<8) {
        printf("%s\n",WEEKS[week-1]);
    } else {
        printf("Please enter a number between 1 and 7\n");
    }
    
    return 0;
}
