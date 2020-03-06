//
//  main.c
//  018
//
//  Created by Ayşıl Simge Karacan on 10.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//018-How to get quotient and remainder of a given number

#include <stdio.h>

int main(void) {
    int number1,number2,quotient,remainder;
    
    printf("Enter the first and numbers: ");
    scanf("%d %d",&number1,&number2);
    
    remainder = number1 % number2;
    quotient = number1 / number2;
    
    printf("Remainder: %d\n",remainder);
    printf("Quotient: %d\n",quotient);
    
    
    
    return 0;
}
