//
//  main.c
//  069
//
//  Created by Ayşıl Simge Karacan on 1.12.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/06/c-program-to-calculate-product-of-digits.html

//C program to find product of digits of a number

#include <stdio.h>

int main() {
    int number, digit,product=1;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    while (number>10) {
        digit = number % 10;
        
        product *= digit;
        
        number = number / 10;
    }
    
    printf("Product of the given number: %d\n",product);
    
    
    return 0;
}
