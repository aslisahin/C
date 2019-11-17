//
//  main.c
//  034
//
//  Created by Ayşıl Simge Karacan on 14.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//

//Write a C program to input a year and check whether year is leap year or not using conditional/ternary operator ?:


#include <stdio.h>

int main(void) {
    int year;
    
    printf("Year: ");
    scanf("%d",&year);
    
    (year % 4 == 0 && year % 100 != 0) ? printf("%d Leap Year\n",year) : (year % 400) ? printf("%d Leap Year\n",year) : printf("%d Common Year\n",year) ;
    
    
    return 0;
}
