//
//  main.c
//  071
//
//  Created by Ayşıl Simge Karacan on 2.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-check-whether-number-is-palindrome-or-not.html

//C program to check whether a number is palindrome or not

#include <stdio.h>

int main(void) {
    int number,digit,reversedNumber=0,givenNumber;
    
    printf("Enter any number: ");
    scanf("%d",&number);
    
    givenNumber = number;
    
    while (number!=0) {
        digit = number % 10;
        
        reversedNumber = (reversedNumber*10) + digit;
        
        number = number/10;
    }
    
    if (reversedNumber == givenNumber) {
        printf("%d is polindrome\n",reversedNumber);
    } else {
        printf("%d is not polindrome\n",reversedNumber);
    }
    
    
    return 0;
}
