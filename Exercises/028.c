//
//  main.c
//  030
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2015/05/c-program-to-calculate-square-root.html

//Write a C program to input a number and find square root of the given number. How to find square root of a number in C programming using inbuilt sqrt() function.

#include <stdio.h>
#include <math.h>

int main(void) {
    int number,root;
    
    printf("Enter the number : ");
    scanf("%d",&number);
    
    root = sqrt(number);
    
    printf("Squared root of %d is %d\n",number,root);

    return 0;
}
