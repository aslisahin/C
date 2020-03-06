//
//  main.c
//  049
//
//  Created by Ayşıl Simge Karacan on 17.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-find-maximum-using-switch-case.html

//Write a C program to input two numbers from user and find maximum between two numbers using switch case.

#include <stdio.h>

int main(void) {
    int number1,number2;
    
    printf("Enter two numbers: ");
    scanf("%d%d",&number1,&number2);
    
    switch (number1>number2) {
        case 0:
            printf("%d is the maximum number\n",number2);
            break;
        case 1:
            printf("%d is the maximum number\n",number1);
            break;
    }
    
    
    return 0;
}
