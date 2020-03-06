//
//  main.c
//  051
//
//  Created by Ayşıl Simge Karacan on 18.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//Link:https://codeforwin.org/2018/05/check-positive-negative-or-zero-using-switch-case.html

//Write a C program to input a number and check positive negative or zero using switch case. 

#include <stdio.h>

int main(void) {
    
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    switch (number > 0) {
        case 1:
            printf("%d is positive",number);
            break;
        case 0:
            switch (number<0) {
                case 1:
                    printf("%d is negative",number);
                    break;
                case 0:
                    printf("%d is zero",number);
                    break;
            }
            break;
    }
    
    return 0;
}
