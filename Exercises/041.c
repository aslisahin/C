//
//  main.c
//  041
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link: https://codeforwin.org/2015/05/c-program-to-print-week-name.html

//Write a C program to input week number(1-7) and print the corresponding day of week name using if else.

#include <stdio.h>

int main(void) {
    int number;
    
    printf("Week number (1-7): ");
    scanf("%d",&number);
    
    if (number == 1) {
        printf("Monday\n");
    } else if (number == 2) {
        printf("Tuesday\n");
    } else if (number == 3) {
        printf("Wednesday\n");
    } else if (number == 4) {
        printf("Thursday\n");
    } else if (number == 5) {
        printf("Friday\n");
    } else if (number == 6) {
        printf("Saturday\n");
    } else if (number == 7) {
        printf("Sunday\n");
    } else {
        printf("Please input a number between 1 and 7.\n");
    }
    
    return 0;
}
