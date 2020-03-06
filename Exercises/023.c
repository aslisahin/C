//
//  main.c
//  023
//
//  Created by Ayşıl Simge Karacan on 13.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//023-Write a program that reads in two integers and determines and prints whether the first is a multiple of the second. [Hint: Use the remainder operator.]

#include <stdio.h>

int main(void) {
    
    int firstNumber,secondNumber;
    
    printf("Enter the first and second number: ");
    scanf("%d%d",&firstNumber,&secondNumber);
    
    if (secondNumber % firstNumber == 0) {
        printf("The first number is a multiple of the second number.\n");
    } else {
        printf("The first number is not a multiple of the second number. \n");
    }
    
    
    return 0;
}
