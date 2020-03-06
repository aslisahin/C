//
//  main.c
//  050
//
//  Created by Ayşıl Simge Karacan on 18.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-check-even-or-odd-using-switch-case.html

//Write a C program to input number from user and check whether the number is even or odd using switch case.

#include <stdio.h>

int main(void) {
    int number;
    
    printf("Enter a number:");
    scanf("%d",&number);
    
    switch (number % 2 == 0) {
        case 0:
            printf("%d is odd\n",number);
            break;
        case 1:
            printf("%d is even\n",number);
    }
    
    return 0;
}
