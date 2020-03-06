//
//  main.c
//  029
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//https://codeforwin.org/2015/05/c-program-to-find-power-of-two-number.html

//Write a C program to input two numbers from user and find their power using pow() function.

#include <stdio.h>
#include <math.h>

int main() {
    int base,exponent,power;
    
    printf("Enter base number: ");
    scanf("%d",&base);
    
    printf("Enter exponent number: ");
    scanf("%d",&exponent);
    
    power = pow(base, exponent);
    
    printf("%d ^ %d = %d ",base,exponent,power);
    
    
    return 0;
}
