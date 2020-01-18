//
//  main.c
//  072
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-print-numbers-in-words.html

//C program to print number in words

#include <stdio.h>

int main(void) {
    int number,digit=0,reversedNumber=0;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    //reserved number
    while (number!=0) {
        reversedNumber = (reversedNumber*10) + (number % 10);
        number /= 10;
    }
    
    while (reversedNumber!=0) {
        digit = reversedNumber % 10;
        
        switch (digit) {
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            case 0:
                printf("Zero ");
                break;
        }
        
        reversedNumber /= 10;
    }
    
    
    
    return 0;
}
