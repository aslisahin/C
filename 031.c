//
//  main.c
//  033
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-find-maximum-using-ternary-operator.html

//Write a C program to input two numbers and find maximum between two numbers using conditional/ternary operator ?:

#include <stdio.h>

int main(void) {
    int number1,number2,maxNumber;
    
    printf("Enter the numbers : ");
    scanf("%d%d",&number1,&number2);
    
    maxNumber = (number1 > number2) ? number1 : number2;
    
    printf("Maximum number is: %d\n",maxNumber);
    
    return 0;
}
