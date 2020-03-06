//
//  main.c
//  053
//
//  Created by Ayşıl Simge Karacan on 18.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-create-simple-calculator-using-switch-case.html

//Write a C program to create menu driven calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions.

#include <stdio.h>

int main(void) {
    float number1,number2;
    char operator;
    
    printf("Enter the (first number) (Operator) (Second Number): ");
    scanf("%f %c %f",&number1,&operator,&number2);
    
    switch (operator) {
        case '+':
            printf("%.2f %c %.2f = %.2f\n",number1,operator,number2,number1+number2);
            break;
        case '-':
            printf("%.2f %c %f = %.2f\n",number1,operator,number2,number1-number2);
            break;
        case '*':
            printf("%.2f %c %.2f = %.2f\n",number1,operator,number2,number1*number2);
            break;
        case '/':
            printf("%.2f %c %.2f = %.2f\n",number1,operator,number2,number1/number2);
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
    
    return 0;
}
