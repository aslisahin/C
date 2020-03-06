//
//  main.c
//  047
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

#include <stdio.h>

//Link:https://codeforwin.org/2015/06/c-program-to-print-number-of-days-in-month-using-switch-case.html

//Write a C program to input month number and print total number of days in month using switch...case.


int main(void){
    int month;
    
    printf("Enter a month number:");
    scanf("%d",&month);
    
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days.");
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days.");
            break;
            
        case 2:
            printf("28/29 days");
            break;
            
        default:
            printf("Invalid input!");
            break;
    }
    
    return 0;
}



