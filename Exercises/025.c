//
//  main.c
//  025
//
//  Created by Ayşıl Simge Karacan on 13.11.2019.
//  Copyright © 2019 Ayşıl Simge Karacan. All rights reserved.
//

//025-Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each. [Hint: Use combinations of integer division and the remainder operation.]

#include <stdio.h>

int main(void) {
    int number,a,b,c,d,e;
    
    printf("Enter the number:");
    scanf("%d",&number);
    
    a = number / 10000;
    b = number / 1000 % 10;
    c = number / 100 % 10;
    d = number / 10 % 10;
    e = number % 10;
    
    
    printf("%d  %d  %d  %d  %d\n",a,b,c,d,e);
    
    return 0;
}
