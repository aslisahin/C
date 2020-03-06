//
//  main.c
//  046
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-print-week-day-name-using-switch-case.html

//Write a C program to input week number(1-7) and print day of week name using switch case.

#include <stdio.h>

int main(void) {
    int day;
    
    printf("Enter a week number: ");
    scanf("%d",&day);
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
        case 3:
            printf("Wednesday\n");
        case 4:
            printf("Thursday\n");
        case 5:
            printf("Friday\n");
        case 6:
            printf("Saturday\n");
        case 7:
            printf("Sunday\n");
            
        default:
            printf("Invalid input.\n");
            
    }
    
    
    return 0;
}
